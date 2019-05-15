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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
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
  /**
   * <p>This data type represents the information you need to connect to an Amazon
   * Aurora DB cluster. This data type is used as a response element in the following
   * actions:</p> <ul> <li> <p> <code>CreateDBClusterEndpoint</code> </p> </li> <li>
   * <p> <code>DescribeDBClusterEndpoints</code> </p> </li> <li> <p>
   * <code>ModifyDBClusterEndpoint</code> </p> </li> <li> <p>
   * <code>DeleteDBClusterEndpoint</code> </p> </li> </ul> <p>For the data structure
   * that represents Amazon RDS DB instance endpoints, see
   * <code>Endpoint</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBClusterEndpoint">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API CreateDBClusterEndpointResult
  {
  public:
    CreateDBClusterEndpointResult();
    CreateDBClusterEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateDBClusterEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The identifier associated with the endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline const Aws::String& GetDBClusterEndpointIdentifier() const{ return m_dBClusterEndpointIdentifier; }

    /**
     * <p>The identifier associated with the endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline void SetDBClusterEndpointIdentifier(const Aws::String& value) { m_dBClusterEndpointIdentifier = value; }

    /**
     * <p>The identifier associated with the endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline void SetDBClusterEndpointIdentifier(Aws::String&& value) { m_dBClusterEndpointIdentifier = std::move(value); }

    /**
     * <p>The identifier associated with the endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline void SetDBClusterEndpointIdentifier(const char* value) { m_dBClusterEndpointIdentifier.assign(value); }

    /**
     * <p>The identifier associated with the endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline CreateDBClusterEndpointResult& WithDBClusterEndpointIdentifier(const Aws::String& value) { SetDBClusterEndpointIdentifier(value); return *this;}

    /**
     * <p>The identifier associated with the endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline CreateDBClusterEndpointResult& WithDBClusterEndpointIdentifier(Aws::String&& value) { SetDBClusterEndpointIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier associated with the endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline CreateDBClusterEndpointResult& WithDBClusterEndpointIdentifier(const char* value) { SetDBClusterEndpointIdentifier(value); return *this;}


    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifier = value; }

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline CreateDBClusterEndpointResult& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline CreateDBClusterEndpointResult& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline CreateDBClusterEndpointResult& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>A unique system-generated identifier for an endpoint. It remains the same for
     * the whole life of the endpoint.</p>
     */
    inline const Aws::String& GetDBClusterEndpointResourceIdentifier() const{ return m_dBClusterEndpointResourceIdentifier; }

    /**
     * <p>A unique system-generated identifier for an endpoint. It remains the same for
     * the whole life of the endpoint.</p>
     */
    inline void SetDBClusterEndpointResourceIdentifier(const Aws::String& value) { m_dBClusterEndpointResourceIdentifier = value; }

    /**
     * <p>A unique system-generated identifier for an endpoint. It remains the same for
     * the whole life of the endpoint.</p>
     */
    inline void SetDBClusterEndpointResourceIdentifier(Aws::String&& value) { m_dBClusterEndpointResourceIdentifier = std::move(value); }

    /**
     * <p>A unique system-generated identifier for an endpoint. It remains the same for
     * the whole life of the endpoint.</p>
     */
    inline void SetDBClusterEndpointResourceIdentifier(const char* value) { m_dBClusterEndpointResourceIdentifier.assign(value); }

    /**
     * <p>A unique system-generated identifier for an endpoint. It remains the same for
     * the whole life of the endpoint.</p>
     */
    inline CreateDBClusterEndpointResult& WithDBClusterEndpointResourceIdentifier(const Aws::String& value) { SetDBClusterEndpointResourceIdentifier(value); return *this;}

    /**
     * <p>A unique system-generated identifier for an endpoint. It remains the same for
     * the whole life of the endpoint.</p>
     */
    inline CreateDBClusterEndpointResult& WithDBClusterEndpointResourceIdentifier(Aws::String&& value) { SetDBClusterEndpointResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique system-generated identifier for an endpoint. It remains the same for
     * the whole life of the endpoint.</p>
     */
    inline CreateDBClusterEndpointResult& WithDBClusterEndpointResourceIdentifier(const char* value) { SetDBClusterEndpointResourceIdentifier(value); return *this;}


    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpoint = value; }

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpoint = std::move(value); }

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpoint.assign(value); }

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline CreateDBClusterEndpointResult& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline CreateDBClusterEndpointResult& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline CreateDBClusterEndpointResult& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The current status of the endpoint. One of: <code>creating</code>,
     * <code>available</code>, <code>deleting</code>, <code>modifying</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the endpoint. One of: <code>creating</code>,
     * <code>available</code>, <code>deleting</code>, <code>modifying</code>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The current status of the endpoint. One of: <code>creating</code>,
     * <code>available</code>, <code>deleting</code>, <code>modifying</code>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the endpoint. One of: <code>creating</code>,
     * <code>available</code>, <code>deleting</code>, <code>modifying</code>.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The current status of the endpoint. One of: <code>creating</code>,
     * <code>available</code>, <code>deleting</code>, <code>modifying</code>.</p>
     */
    inline CreateDBClusterEndpointResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the endpoint. One of: <code>creating</code>,
     * <code>available</code>, <code>deleting</code>, <code>modifying</code>.</p>
     */
    inline CreateDBClusterEndpointResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The current status of the endpoint. One of: <code>creating</code>,
     * <code>available</code>, <code>deleting</code>, <code>modifying</code>.</p>
     */
    inline CreateDBClusterEndpointResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>CUSTOM</code>.</p>
     */
    inline const Aws::String& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>CUSTOM</code>.</p>
     */
    inline void SetEndpointType(const Aws::String& value) { m_endpointType = value; }

    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>CUSTOM</code>.</p>
     */
    inline void SetEndpointType(Aws::String&& value) { m_endpointType = std::move(value); }

    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>CUSTOM</code>.</p>
     */
    inline void SetEndpointType(const char* value) { m_endpointType.assign(value); }

    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>CUSTOM</code>.</p>
     */
    inline CreateDBClusterEndpointResult& WithEndpointType(const Aws::String& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>CUSTOM</code>.</p>
     */
    inline CreateDBClusterEndpointResult& WithEndpointType(Aws::String&& value) { SetEndpointType(std::move(value)); return *this;}

    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>CUSTOM</code>.</p>
     */
    inline CreateDBClusterEndpointResult& WithEndpointType(const char* value) { SetEndpointType(value); return *this;}


    /**
     * <p>The type associated with a custom endpoint. One of: <code>READER</code>,
     * <code>ANY</code>.</p>
     */
    inline const Aws::String& GetCustomEndpointType() const{ return m_customEndpointType; }

    /**
     * <p>The type associated with a custom endpoint. One of: <code>READER</code>,
     * <code>ANY</code>.</p>
     */
    inline void SetCustomEndpointType(const Aws::String& value) { m_customEndpointType = value; }

    /**
     * <p>The type associated with a custom endpoint. One of: <code>READER</code>,
     * <code>ANY</code>.</p>
     */
    inline void SetCustomEndpointType(Aws::String&& value) { m_customEndpointType = std::move(value); }

    /**
     * <p>The type associated with a custom endpoint. One of: <code>READER</code>,
     * <code>ANY</code>.</p>
     */
    inline void SetCustomEndpointType(const char* value) { m_customEndpointType.assign(value); }

    /**
     * <p>The type associated with a custom endpoint. One of: <code>READER</code>,
     * <code>ANY</code>.</p>
     */
    inline CreateDBClusterEndpointResult& WithCustomEndpointType(const Aws::String& value) { SetCustomEndpointType(value); return *this;}

    /**
     * <p>The type associated with a custom endpoint. One of: <code>READER</code>,
     * <code>ANY</code>.</p>
     */
    inline CreateDBClusterEndpointResult& WithCustomEndpointType(Aws::String&& value) { SetCustomEndpointType(std::move(value)); return *this;}

    /**
     * <p>The type associated with a custom endpoint. One of: <code>READER</code>,
     * <code>ANY</code>.</p>
     */
    inline CreateDBClusterEndpointResult& WithCustomEndpointType(const char* value) { SetCustomEndpointType(value); return *this;}


    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStaticMembers() const{ return m_staticMembers; }

    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline void SetStaticMembers(const Aws::Vector<Aws::String>& value) { m_staticMembers = value; }

    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline void SetStaticMembers(Aws::Vector<Aws::String>&& value) { m_staticMembers = std::move(value); }

    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline CreateDBClusterEndpointResult& WithStaticMembers(const Aws::Vector<Aws::String>& value) { SetStaticMembers(value); return *this;}

    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline CreateDBClusterEndpointResult& WithStaticMembers(Aws::Vector<Aws::String>&& value) { SetStaticMembers(std::move(value)); return *this;}

    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline CreateDBClusterEndpointResult& AddStaticMembers(const Aws::String& value) { m_staticMembers.push_back(value); return *this; }

    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline CreateDBClusterEndpointResult& AddStaticMembers(Aws::String&& value) { m_staticMembers.push_back(std::move(value)); return *this; }

    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline CreateDBClusterEndpointResult& AddStaticMembers(const char* value) { m_staticMembers.push_back(value); return *this; }


    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedMembers() const{ return m_excludedMembers; }

    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline void SetExcludedMembers(const Aws::Vector<Aws::String>& value) { m_excludedMembers = value; }

    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline void SetExcludedMembers(Aws::Vector<Aws::String>&& value) { m_excludedMembers = std::move(value); }

    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline CreateDBClusterEndpointResult& WithExcludedMembers(const Aws::Vector<Aws::String>& value) { SetExcludedMembers(value); return *this;}

    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline CreateDBClusterEndpointResult& WithExcludedMembers(Aws::Vector<Aws::String>&& value) { SetExcludedMembers(std::move(value)); return *this;}

    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline CreateDBClusterEndpointResult& AddExcludedMembers(const Aws::String& value) { m_excludedMembers.push_back(value); return *this; }

    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline CreateDBClusterEndpointResult& AddExcludedMembers(Aws::String&& value) { m_excludedMembers.push_back(std::move(value)); return *this; }

    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline CreateDBClusterEndpointResult& AddExcludedMembers(const char* value) { m_excludedMembers.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) for the endpoint.</p>
     */
    inline const Aws::String& GetDBClusterEndpointArn() const{ return m_dBClusterEndpointArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the endpoint.</p>
     */
    inline void SetDBClusterEndpointArn(const Aws::String& value) { m_dBClusterEndpointArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the endpoint.</p>
     */
    inline void SetDBClusterEndpointArn(Aws::String&& value) { m_dBClusterEndpointArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the endpoint.</p>
     */
    inline void SetDBClusterEndpointArn(const char* value) { m_dBClusterEndpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the endpoint.</p>
     */
    inline CreateDBClusterEndpointResult& WithDBClusterEndpointArn(const Aws::String& value) { SetDBClusterEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the endpoint.</p>
     */
    inline CreateDBClusterEndpointResult& WithDBClusterEndpointArn(Aws::String&& value) { SetDBClusterEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the endpoint.</p>
     */
    inline CreateDBClusterEndpointResult& WithDBClusterEndpointArn(const char* value) { SetDBClusterEndpointArn(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateDBClusterEndpointResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateDBClusterEndpointResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_dBClusterEndpointIdentifier;

    Aws::String m_dBClusterIdentifier;

    Aws::String m_dBClusterEndpointResourceIdentifier;

    Aws::String m_endpoint;

    Aws::String m_status;

    Aws::String m_endpointType;

    Aws::String m_customEndpointType;

    Aws::Vector<Aws::String> m_staticMembers;

    Aws::Vector<Aws::String> m_excludedMembers;

    Aws::String m_dBClusterEndpointArn;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
