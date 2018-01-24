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
   * <p> Result structure used for requests to export project configuration details.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ExportProjectResult">AWS
   * API Reference</a></p>
   */
  class AWS_MOBILE_API ExportProjectResult
  {
  public:
    ExportProjectResult();
    ExportProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ExportProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> URL which can be used to download the exported project configuation file(s).
     * </p>
     */
    inline const Aws::String& GetDownloadUrl() const{ return m_downloadUrl; }

    /**
     * <p> URL which can be used to download the exported project configuation file(s).
     * </p>
     */
    inline void SetDownloadUrl(const Aws::String& value) { m_downloadUrl = value; }

    /**
     * <p> URL which can be used to download the exported project configuation file(s).
     * </p>
     */
    inline void SetDownloadUrl(Aws::String&& value) { m_downloadUrl = std::move(value); }

    /**
     * <p> URL which can be used to download the exported project configuation file(s).
     * </p>
     */
    inline void SetDownloadUrl(const char* value) { m_downloadUrl.assign(value); }

    /**
     * <p> URL which can be used to download the exported project configuation file(s).
     * </p>
     */
    inline ExportProjectResult& WithDownloadUrl(const Aws::String& value) { SetDownloadUrl(value); return *this;}

    /**
     * <p> URL which can be used to download the exported project configuation file(s).
     * </p>
     */
    inline ExportProjectResult& WithDownloadUrl(Aws::String&& value) { SetDownloadUrl(std::move(value)); return *this;}

    /**
     * <p> URL which can be used to download the exported project configuation file(s).
     * </p>
     */
    inline ExportProjectResult& WithDownloadUrl(const char* value) { SetDownloadUrl(value); return *this;}


    /**
     * <p> URL which can be shared to allow other AWS users to create their own project
     * in AWS Mobile Hub with the same configuration as the specified project. This URL
     * pertains to a snapshot in time of the project configuration that is created when
     * this API is called. If you want to share additional changes to your project
     * configuration, then you will need to create and share a new snapshot by calling
     * this method again. </p>
     */
    inline const Aws::String& GetShareUrl() const{ return m_shareUrl; }

    /**
     * <p> URL which can be shared to allow other AWS users to create their own project
     * in AWS Mobile Hub with the same configuration as the specified project. This URL
     * pertains to a snapshot in time of the project configuration that is created when
     * this API is called. If you want to share additional changes to your project
     * configuration, then you will need to create and share a new snapshot by calling
     * this method again. </p>
     */
    inline void SetShareUrl(const Aws::String& value) { m_shareUrl = value; }

    /**
     * <p> URL which can be shared to allow other AWS users to create their own project
     * in AWS Mobile Hub with the same configuration as the specified project. This URL
     * pertains to a snapshot in time of the project configuration that is created when
     * this API is called. If you want to share additional changes to your project
     * configuration, then you will need to create and share a new snapshot by calling
     * this method again. </p>
     */
    inline void SetShareUrl(Aws::String&& value) { m_shareUrl = std::move(value); }

    /**
     * <p> URL which can be shared to allow other AWS users to create their own project
     * in AWS Mobile Hub with the same configuration as the specified project. This URL
     * pertains to a snapshot in time of the project configuration that is created when
     * this API is called. If you want to share additional changes to your project
     * configuration, then you will need to create and share a new snapshot by calling
     * this method again. </p>
     */
    inline void SetShareUrl(const char* value) { m_shareUrl.assign(value); }

    /**
     * <p> URL which can be shared to allow other AWS users to create their own project
     * in AWS Mobile Hub with the same configuration as the specified project. This URL
     * pertains to a snapshot in time of the project configuration that is created when
     * this API is called. If you want to share additional changes to your project
     * configuration, then you will need to create and share a new snapshot by calling
     * this method again. </p>
     */
    inline ExportProjectResult& WithShareUrl(const Aws::String& value) { SetShareUrl(value); return *this;}

    /**
     * <p> URL which can be shared to allow other AWS users to create their own project
     * in AWS Mobile Hub with the same configuration as the specified project. This URL
     * pertains to a snapshot in time of the project configuration that is created when
     * this API is called. If you want to share additional changes to your project
     * configuration, then you will need to create and share a new snapshot by calling
     * this method again. </p>
     */
    inline ExportProjectResult& WithShareUrl(Aws::String&& value) { SetShareUrl(std::move(value)); return *this;}

    /**
     * <p> URL which can be shared to allow other AWS users to create their own project
     * in AWS Mobile Hub with the same configuration as the specified project. This URL
     * pertains to a snapshot in time of the project configuration that is created when
     * this API is called. If you want to share additional changes to your project
     * configuration, then you will need to create and share a new snapshot by calling
     * this method again. </p>
     */
    inline ExportProjectResult& WithShareUrl(const char* value) { SetShareUrl(value); return *this;}


    /**
     * <p> Unique identifier for the exported snapshot of the project configuration.
     * This snapshot identifier is included in the share URL. </p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p> Unique identifier for the exported snapshot of the project configuration.
     * This snapshot identifier is included in the share URL. </p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotId = value; }

    /**
     * <p> Unique identifier for the exported snapshot of the project configuration.
     * This snapshot identifier is included in the share URL. </p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotId = std::move(value); }

    /**
     * <p> Unique identifier for the exported snapshot of the project configuration.
     * This snapshot identifier is included in the share URL. </p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotId.assign(value); }

    /**
     * <p> Unique identifier for the exported snapshot of the project configuration.
     * This snapshot identifier is included in the share URL. </p>
     */
    inline ExportProjectResult& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p> Unique identifier for the exported snapshot of the project configuration.
     * This snapshot identifier is included in the share URL. </p>
     */
    inline ExportProjectResult& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p> Unique identifier for the exported snapshot of the project configuration.
     * This snapshot identifier is included in the share URL. </p>
     */
    inline ExportProjectResult& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}

  private:

    Aws::String m_downloadUrl;

    Aws::String m_shareUrl;

    Aws::String m_snapshotId;
  };

} // namespace Model
} // namespace Mobile
} // namespace Aws
