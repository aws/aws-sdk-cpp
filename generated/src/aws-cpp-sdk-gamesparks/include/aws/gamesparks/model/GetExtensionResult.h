/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/gamesparks/model/ExtensionDetails.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GameSparks
{
namespace Model
{
  class GetExtensionResult
  {
  public:
    AWS_GAMESPARKS_API GetExtensionResult();
    AWS_GAMESPARKS_API GetExtensionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMESPARKS_API GetExtensionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the extension.</p>
     */
    inline const ExtensionDetails& GetExtension() const{ return m_extension; }

    /**
     * <p>Details about the extension.</p>
     */
    inline void SetExtension(const ExtensionDetails& value) { m_extension = value; }

    /**
     * <p>Details about the extension.</p>
     */
    inline void SetExtension(ExtensionDetails&& value) { m_extension = std::move(value); }

    /**
     * <p>Details about the extension.</p>
     */
    inline GetExtensionResult& WithExtension(const ExtensionDetails& value) { SetExtension(value); return *this;}

    /**
     * <p>Details about the extension.</p>
     */
    inline GetExtensionResult& WithExtension(ExtensionDetails&& value) { SetExtension(std::move(value)); return *this;}

  private:

    ExtensionDetails m_extension;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
