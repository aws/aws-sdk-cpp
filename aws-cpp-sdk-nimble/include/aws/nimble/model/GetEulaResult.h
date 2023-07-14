/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/Eula.h>
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
namespace NimbleStudio
{
namespace Model
{
  class AWS_NIMBLESTUDIO_API GetEulaResult
  {
  public:
    GetEulaResult();
    GetEulaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetEulaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The EULA.</p>
     */
    inline const Eula& GetEula() const{ return m_eula; }

    /**
     * <p>The EULA.</p>
     */
    inline void SetEula(const Eula& value) { m_eula = value; }

    /**
     * <p>The EULA.</p>
     */
    inline void SetEula(Eula&& value) { m_eula = std::move(value); }

    /**
     * <p>The EULA.</p>
     */
    inline GetEulaResult& WithEula(const Eula& value) { SetEula(value); return *this;}

    /**
     * <p>The EULA.</p>
     */
    inline GetEulaResult& WithEula(Eula&& value) { SetEula(std::move(value)); return *this;}

  private:

    Eula m_eula;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
