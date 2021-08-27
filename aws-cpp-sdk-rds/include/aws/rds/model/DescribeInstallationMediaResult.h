/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/InstallationMedia.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  class AWS_RDS_API DescribeInstallationMediaResult
  {
  public:
    DescribeInstallationMediaResult();
    DescribeInstallationMediaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeInstallationMediaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An optional pagination token provided by a previous
     * <a>DescribeInstallationMedia</a> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous
     * <a>DescribeInstallationMedia</a> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous
     * <a>DescribeInstallationMedia</a> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <a>DescribeInstallationMedia</a> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <a>DescribeInstallationMedia</a> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeInstallationMediaResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <a>DescribeInstallationMedia</a> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeInstallationMediaResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <a>DescribeInstallationMedia</a> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeInstallationMediaResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The list of <a>InstallationMedia</a> objects for the AWS account.</p>
     */
    inline const Aws::Vector<InstallationMedia>& GetInstallationMedia() const{ return m_installationMedia; }

    /**
     * <p>The list of <a>InstallationMedia</a> objects for the AWS account.</p>
     */
    inline void SetInstallationMedia(const Aws::Vector<InstallationMedia>& value) { m_installationMedia = value; }

    /**
     * <p>The list of <a>InstallationMedia</a> objects for the AWS account.</p>
     */
    inline void SetInstallationMedia(Aws::Vector<InstallationMedia>&& value) { m_installationMedia = std::move(value); }

    /**
     * <p>The list of <a>InstallationMedia</a> objects for the AWS account.</p>
     */
    inline DescribeInstallationMediaResult& WithInstallationMedia(const Aws::Vector<InstallationMedia>& value) { SetInstallationMedia(value); return *this;}

    /**
     * <p>The list of <a>InstallationMedia</a> objects for the AWS account.</p>
     */
    inline DescribeInstallationMediaResult& WithInstallationMedia(Aws::Vector<InstallationMedia>&& value) { SetInstallationMedia(std::move(value)); return *this;}

    /**
     * <p>The list of <a>InstallationMedia</a> objects for the AWS account.</p>
     */
    inline DescribeInstallationMediaResult& AddInstallationMedia(const InstallationMedia& value) { m_installationMedia.push_back(value); return *this; }

    /**
     * <p>The list of <a>InstallationMedia</a> objects for the AWS account.</p>
     */
    inline DescribeInstallationMediaResult& AddInstallationMedia(InstallationMedia&& value) { m_installationMedia.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeInstallationMediaResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeInstallationMediaResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<InstallationMedia> m_installationMedia;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
