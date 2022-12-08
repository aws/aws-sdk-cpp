/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mobile/Mobile_EXPORTS.h>
#include <aws/mobile/model/ProjectDetails.h>
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
namespace Mobile
{
namespace Model
{
  /**
   * <p> Result structure used for requests to updated project configuration.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/UpdateProjectResult">AWS
   * API Reference</a></p>
   */
  class UpdateProjectResult
  {
  public:
    AWS_MOBILE_API UpdateProjectResult();
    AWS_MOBILE_API UpdateProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MOBILE_API UpdateProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Detailed information about the updated AWS Mobile Hub project. </p>
     */
    inline const ProjectDetails& GetDetails() const{ return m_details; }

    /**
     * <p> Detailed information about the updated AWS Mobile Hub project. </p>
     */
    inline void SetDetails(const ProjectDetails& value) { m_details = value; }

    /**
     * <p> Detailed information about the updated AWS Mobile Hub project. </p>
     */
    inline void SetDetails(ProjectDetails&& value) { m_details = std::move(value); }

    /**
     * <p> Detailed information about the updated AWS Mobile Hub project. </p>
     */
    inline UpdateProjectResult& WithDetails(const ProjectDetails& value) { SetDetails(value); return *this;}

    /**
     * <p> Detailed information about the updated AWS Mobile Hub project. </p>
     */
    inline UpdateProjectResult& WithDetails(ProjectDetails&& value) { SetDetails(std::move(value)); return *this;}

  private:

    ProjectDetails m_details;
  };

} // namespace Model
} // namespace Mobile
} // namespace Aws
