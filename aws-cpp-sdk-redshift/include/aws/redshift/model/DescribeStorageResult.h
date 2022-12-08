/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/ResponseMetadata.h>
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
namespace Redshift
{
namespace Model
{
  class DescribeStorageResult
  {
  public:
    AWS_REDSHIFT_API DescribeStorageResult();
    AWS_REDSHIFT_API DescribeStorageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeStorageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The total amount of storage currently used for snapshots.</p>
     */
    inline double GetTotalBackupSizeInMegaBytes() const{ return m_totalBackupSizeInMegaBytes; }

    /**
     * <p>The total amount of storage currently used for snapshots.</p>
     */
    inline void SetTotalBackupSizeInMegaBytes(double value) { m_totalBackupSizeInMegaBytes = value; }

    /**
     * <p>The total amount of storage currently used for snapshots.</p>
     */
    inline DescribeStorageResult& WithTotalBackupSizeInMegaBytes(double value) { SetTotalBackupSizeInMegaBytes(value); return *this;}


    /**
     * <p>The total amount of storage currently provisioned.</p>
     */
    inline double GetTotalProvisionedStorageInMegaBytes() const{ return m_totalProvisionedStorageInMegaBytes; }

    /**
     * <p>The total amount of storage currently provisioned.</p>
     */
    inline void SetTotalProvisionedStorageInMegaBytes(double value) { m_totalProvisionedStorageInMegaBytes = value; }

    /**
     * <p>The total amount of storage currently provisioned.</p>
     */
    inline DescribeStorageResult& WithTotalProvisionedStorageInMegaBytes(double value) { SetTotalProvisionedStorageInMegaBytes(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeStorageResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeStorageResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    double m_totalBackupSizeInMegaBytes;

    double m_totalProvisionedStorageInMegaBytes;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
