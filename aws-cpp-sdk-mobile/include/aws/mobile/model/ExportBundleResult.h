/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mobile/Mobile_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> Result structure which contains link to download custom-generated SDK and
   * tool packages used to integrate mobile web or app clients with backed AWS
   * resources. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ExportBundleResult">AWS
   * API Reference</a></p>
   */
  class AWS_MOBILE_API ExportBundleResult
  {
  public:
    ExportBundleResult();
    ExportBundleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ExportBundleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> URL which contains the custom-generated SDK and tool packages used to
     * integrate the client mobile app or web app with the AWS resources created by the
     * AWS Mobile Hub project. </p>
     */
    inline const Aws::String& GetDownloadUrl() const{ return m_downloadUrl; }

    /**
     * <p> URL which contains the custom-generated SDK and tool packages used to
     * integrate the client mobile app or web app with the AWS resources created by the
     * AWS Mobile Hub project. </p>
     */
    inline void SetDownloadUrl(const Aws::String& value) { m_downloadUrl = value; }

    /**
     * <p> URL which contains the custom-generated SDK and tool packages used to
     * integrate the client mobile app or web app with the AWS resources created by the
     * AWS Mobile Hub project. </p>
     */
    inline void SetDownloadUrl(Aws::String&& value) { m_downloadUrl = std::move(value); }

    /**
     * <p> URL which contains the custom-generated SDK and tool packages used to
     * integrate the client mobile app or web app with the AWS resources created by the
     * AWS Mobile Hub project. </p>
     */
    inline void SetDownloadUrl(const char* value) { m_downloadUrl.assign(value); }

    /**
     * <p> URL which contains the custom-generated SDK and tool packages used to
     * integrate the client mobile app or web app with the AWS resources created by the
     * AWS Mobile Hub project. </p>
     */
    inline ExportBundleResult& WithDownloadUrl(const Aws::String& value) { SetDownloadUrl(value); return *this;}

    /**
     * <p> URL which contains the custom-generated SDK and tool packages used to
     * integrate the client mobile app or web app with the AWS resources created by the
     * AWS Mobile Hub project. </p>
     */
    inline ExportBundleResult& WithDownloadUrl(Aws::String&& value) { SetDownloadUrl(std::move(value)); return *this;}

    /**
     * <p> URL which contains the custom-generated SDK and tool packages used to
     * integrate the client mobile app or web app with the AWS resources created by the
     * AWS Mobile Hub project. </p>
     */
    inline ExportBundleResult& WithDownloadUrl(const char* value) { SetDownloadUrl(value); return *this;}

  private:

    Aws::String m_downloadUrl;
  };

} // namespace Model
} // namespace Mobile
} // namespace Aws
