/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ExportBundleResult
  {
  public:
    AWS_MOBILE_API ExportBundleResult();
    AWS_MOBILE_API ExportBundleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MOBILE_API ExportBundleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
