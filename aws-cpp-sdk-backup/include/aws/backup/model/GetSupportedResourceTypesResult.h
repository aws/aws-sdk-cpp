/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Backup
{
namespace Model
{
  class GetSupportedResourceTypesResult
  {
  public:
    AWS_BACKUP_API GetSupportedResourceTypesResult();
    AWS_BACKUP_API GetSupportedResourceTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API GetSupportedResourceTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains a string with the supported Amazon Web Services resource types:</p>
     * <ul> <li> <p> <code>Aurora</code> for Amazon Aurora</p> </li> <li> <p>
     * <code>DynamoDB</code> for Amazon DynamoDB</p> </li> <li> <p> <code>EBS</code>
     * for Amazon Elastic Block Store</p> </li> <li> <p> <code>EC2</code> for Amazon
     * Elastic Compute Cloud</p> </li> <li> <p> <code>EFS</code> for Amazon Elastic
     * File System</p> </li> <li> <p> <code>FSX</code> for Amazon FSx</p> </li> <li>
     * <p> <code>RDS</code> for Amazon Relational Database Service</p> </li> <li> <p>
     * <code>Storage Gateway</code> for Storage Gateway</p> </li> <li> <p>
     * <code>DocDB</code> for Amazon DocumentDB (with MongoDB compatibility)</p> </li>
     * <li> <p> <code>Neptune</code> for Amazon Neptune</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>Contains a string with the supported Amazon Web Services resource types:</p>
     * <ul> <li> <p> <code>Aurora</code> for Amazon Aurora</p> </li> <li> <p>
     * <code>DynamoDB</code> for Amazon DynamoDB</p> </li> <li> <p> <code>EBS</code>
     * for Amazon Elastic Block Store</p> </li> <li> <p> <code>EC2</code> for Amazon
     * Elastic Compute Cloud</p> </li> <li> <p> <code>EFS</code> for Amazon Elastic
     * File System</p> </li> <li> <p> <code>FSX</code> for Amazon FSx</p> </li> <li>
     * <p> <code>RDS</code> for Amazon Relational Database Service</p> </li> <li> <p>
     * <code>Storage Gateway</code> for Storage Gateway</p> </li> <li> <p>
     * <code>DocDB</code> for Amazon DocumentDB (with MongoDB compatibility)</p> </li>
     * <li> <p> <code>Neptune</code> for Amazon Neptune</p> </li> </ul>
     */
    inline void SetResourceTypes(const Aws::Vector<Aws::String>& value) { m_resourceTypes = value; }

    /**
     * <p>Contains a string with the supported Amazon Web Services resource types:</p>
     * <ul> <li> <p> <code>Aurora</code> for Amazon Aurora</p> </li> <li> <p>
     * <code>DynamoDB</code> for Amazon DynamoDB</p> </li> <li> <p> <code>EBS</code>
     * for Amazon Elastic Block Store</p> </li> <li> <p> <code>EC2</code> for Amazon
     * Elastic Compute Cloud</p> </li> <li> <p> <code>EFS</code> for Amazon Elastic
     * File System</p> </li> <li> <p> <code>FSX</code> for Amazon FSx</p> </li> <li>
     * <p> <code>RDS</code> for Amazon Relational Database Service</p> </li> <li> <p>
     * <code>Storage Gateway</code> for Storage Gateway</p> </li> <li> <p>
     * <code>DocDB</code> for Amazon DocumentDB (with MongoDB compatibility)</p> </li>
     * <li> <p> <code>Neptune</code> for Amazon Neptune</p> </li> </ul>
     */
    inline void SetResourceTypes(Aws::Vector<Aws::String>&& value) { m_resourceTypes = std::move(value); }

    /**
     * <p>Contains a string with the supported Amazon Web Services resource types:</p>
     * <ul> <li> <p> <code>Aurora</code> for Amazon Aurora</p> </li> <li> <p>
     * <code>DynamoDB</code> for Amazon DynamoDB</p> </li> <li> <p> <code>EBS</code>
     * for Amazon Elastic Block Store</p> </li> <li> <p> <code>EC2</code> for Amazon
     * Elastic Compute Cloud</p> </li> <li> <p> <code>EFS</code> for Amazon Elastic
     * File System</p> </li> <li> <p> <code>FSX</code> for Amazon FSx</p> </li> <li>
     * <p> <code>RDS</code> for Amazon Relational Database Service</p> </li> <li> <p>
     * <code>Storage Gateway</code> for Storage Gateway</p> </li> <li> <p>
     * <code>DocDB</code> for Amazon DocumentDB (with MongoDB compatibility)</p> </li>
     * <li> <p> <code>Neptune</code> for Amazon Neptune</p> </li> </ul>
     */
    inline GetSupportedResourceTypesResult& WithResourceTypes(const Aws::Vector<Aws::String>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>Contains a string with the supported Amazon Web Services resource types:</p>
     * <ul> <li> <p> <code>Aurora</code> for Amazon Aurora</p> </li> <li> <p>
     * <code>DynamoDB</code> for Amazon DynamoDB</p> </li> <li> <p> <code>EBS</code>
     * for Amazon Elastic Block Store</p> </li> <li> <p> <code>EC2</code> for Amazon
     * Elastic Compute Cloud</p> </li> <li> <p> <code>EFS</code> for Amazon Elastic
     * File System</p> </li> <li> <p> <code>FSX</code> for Amazon FSx</p> </li> <li>
     * <p> <code>RDS</code> for Amazon Relational Database Service</p> </li> <li> <p>
     * <code>Storage Gateway</code> for Storage Gateway</p> </li> <li> <p>
     * <code>DocDB</code> for Amazon DocumentDB (with MongoDB compatibility)</p> </li>
     * <li> <p> <code>Neptune</code> for Amazon Neptune</p> </li> </ul>
     */
    inline GetSupportedResourceTypesResult& WithResourceTypes(Aws::Vector<Aws::String>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p>Contains a string with the supported Amazon Web Services resource types:</p>
     * <ul> <li> <p> <code>Aurora</code> for Amazon Aurora</p> </li> <li> <p>
     * <code>DynamoDB</code> for Amazon DynamoDB</p> </li> <li> <p> <code>EBS</code>
     * for Amazon Elastic Block Store</p> </li> <li> <p> <code>EC2</code> for Amazon
     * Elastic Compute Cloud</p> </li> <li> <p> <code>EFS</code> for Amazon Elastic
     * File System</p> </li> <li> <p> <code>FSX</code> for Amazon FSx</p> </li> <li>
     * <p> <code>RDS</code> for Amazon Relational Database Service</p> </li> <li> <p>
     * <code>Storage Gateway</code> for Storage Gateway</p> </li> <li> <p>
     * <code>DocDB</code> for Amazon DocumentDB (with MongoDB compatibility)</p> </li>
     * <li> <p> <code>Neptune</code> for Amazon Neptune</p> </li> </ul>
     */
    inline GetSupportedResourceTypesResult& AddResourceTypes(const Aws::String& value) { m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>Contains a string with the supported Amazon Web Services resource types:</p>
     * <ul> <li> <p> <code>Aurora</code> for Amazon Aurora</p> </li> <li> <p>
     * <code>DynamoDB</code> for Amazon DynamoDB</p> </li> <li> <p> <code>EBS</code>
     * for Amazon Elastic Block Store</p> </li> <li> <p> <code>EC2</code> for Amazon
     * Elastic Compute Cloud</p> </li> <li> <p> <code>EFS</code> for Amazon Elastic
     * File System</p> </li> <li> <p> <code>FSX</code> for Amazon FSx</p> </li> <li>
     * <p> <code>RDS</code> for Amazon Relational Database Service</p> </li> <li> <p>
     * <code>Storage Gateway</code> for Storage Gateway</p> </li> <li> <p>
     * <code>DocDB</code> for Amazon DocumentDB (with MongoDB compatibility)</p> </li>
     * <li> <p> <code>Neptune</code> for Amazon Neptune</p> </li> </ul>
     */
    inline GetSupportedResourceTypesResult& AddResourceTypes(Aws::String&& value) { m_resourceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>Contains a string with the supported Amazon Web Services resource types:</p>
     * <ul> <li> <p> <code>Aurora</code> for Amazon Aurora</p> </li> <li> <p>
     * <code>DynamoDB</code> for Amazon DynamoDB</p> </li> <li> <p> <code>EBS</code>
     * for Amazon Elastic Block Store</p> </li> <li> <p> <code>EC2</code> for Amazon
     * Elastic Compute Cloud</p> </li> <li> <p> <code>EFS</code> for Amazon Elastic
     * File System</p> </li> <li> <p> <code>FSX</code> for Amazon FSx</p> </li> <li>
     * <p> <code>RDS</code> for Amazon Relational Database Service</p> </li> <li> <p>
     * <code>Storage Gateway</code> for Storage Gateway</p> </li> <li> <p>
     * <code>DocDB</code> for Amazon DocumentDB (with MongoDB compatibility)</p> </li>
     * <li> <p> <code>Neptune</code> for Amazon Neptune</p> </li> </ul>
     */
    inline GetSupportedResourceTypesResult& AddResourceTypes(const char* value) { m_resourceTypes.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_resourceTypes;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
