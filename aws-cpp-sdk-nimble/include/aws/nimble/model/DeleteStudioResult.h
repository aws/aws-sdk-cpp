/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/Studio.h>
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
  /**
   * <zonbook></zonbook><xhtml></xhtml><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStudioResponse">AWS
   * API Reference</a></p>
   */
  class AWS_NIMBLESTUDIO_API DeleteStudioResult
  {
  public:
    DeleteStudioResult();
    DeleteStudioResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteStudioResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about a studio.</p>
     */
    inline const Studio& GetStudio() const{ return m_studio; }

    /**
     * <p>Information about a studio.</p>
     */
    inline void SetStudio(const Studio& value) { m_studio = value; }

    /**
     * <p>Information about a studio.</p>
     */
    inline void SetStudio(Studio&& value) { m_studio = std::move(value); }

    /**
     * <p>Information about a studio.</p>
     */
    inline DeleteStudioResult& WithStudio(const Studio& value) { SetStudio(value); return *this;}

    /**
     * <p>Information about a studio.</p>
     */
    inline DeleteStudioResult& WithStudio(Studio&& value) { SetStudio(std::move(value)); return *this;}

  private:

    Studio m_studio;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
