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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
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
  class AWS_RDS_API DBClusterEndpoint
  {
  public:
    DBClusterEndpoint();
    DBClusterEndpoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    DBClusterEndpoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The identifier associated with the endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline const Aws::String& GetDBClusterEndpointIdentifier() const{ return m_dBClusterEndpointIdentifier; }

    /**
     * <p>The identifier associated with the endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline bool DBClusterEndpointIdentifierHasBeenSet() const { return m_dBClusterEndpointIdentifierHasBeenSet; }

    /**
     * <p>The identifier associated with the endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline void SetDBClusterEndpointIdentifier(const Aws::String& value) { m_dBClusterEndpointIdentifierHasBeenSet = true; m_dBClusterEndpointIdentifier = value; }

    /**
     * <p>The identifier associated with the endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline void SetDBClusterEndpointIdentifier(Aws::String&& value) { m_dBClusterEndpointIdentifierHasBeenSet = true; m_dBClusterEndpointIdentifier = std::move(value); }

    /**
     * <p>The identifier associated with the endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline void SetDBClusterEndpointIdentifier(const char* value) { m_dBClusterEndpointIdentifierHasBeenSet = true; m_dBClusterEndpointIdentifier.assign(value); }

    /**
     * <p>The identifier associated with the endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline DBClusterEndpoint& WithDBClusterEndpointIdentifier(const Aws::String& value) { SetDBClusterEndpointIdentifier(value); return *this;}

    /**
     * <p>The identifier associated with the endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline DBClusterEndpoint& WithDBClusterEndpointIdentifier(Aws::String&& value) { SetDBClusterEndpointIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier associated with the endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline DBClusterEndpoint& WithDBClusterEndpointIdentifier(const char* value) { SetDBClusterEndpointIdentifier(value); return *this;}


    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline DBClusterEndpoint& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline DBClusterEndpoint& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline DBClusterEndpoint& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>A unique system-generated identifier for an endpoint. It remains the same for
     * the whole life of the endpoint.</p>
     */
    inline const Aws::String& GetDBClusterEndpointResourceIdentifier() const{ return m_dBClusterEndpointResourceIdentifier; }

    /**
     * <p>A unique system-generated identifier for an endpoint. It remains the same for
     * the whole life of the endpoint.</p>
     */
    inline bool DBClusterEndpointResourceIdentifierHasBeenSet() const { return m_dBClusterEndpointResourceIdentifierHasBeenSet; }

    /**
     * <p>A unique system-generated identifier for an endpoint. It remains the same for
     * the whole life of the endpoint.</p>
     */
    inline void SetDBClusterEndpointResourceIdentifier(const Aws::String& value) { m_dBClusterEndpointResourceIdentifierHasBeenSet = true; m_dBClusterEndpointResourceIdentifier = value; }

    /**
     * <p>A unique system-generated identifier for an endpoint. It remains the same for
     * the whole life of the endpoint.</p>
     */
    inline void SetDBClusterEndpointResourceIdentifier(Aws::String&& value) { m_dBClusterEndpointResourceIdentifierHasBeenSet = true; m_dBClusterEndpointResourceIdentifier = std::move(value); }

    /**
     * <p>A unique system-generated identifier for an endpoint. It remains the same for
     * the whole life of the endpoint.</p>
     */
    inline void SetDBClusterEndpointResourceIdentifier(const char* value) { m_dBClusterEndpointResourceIdentifierHasBeenSet = true; m_dBClusterEndpointResourceIdentifier.assign(value); }

    /**
     * <p>A unique system-generated identifier for an endpoint. It remains the same for
     * the whole life of the endpoint.</p>
     */
    inline DBClusterEndpoint& WithDBClusterEndpointResourceIdentifier(const Aws::String& value) { SetDBClusterEndpointResourceIdentifier(value); return *this;}

    /**
     * <p>A unique system-generated identifier for an endpoint. It remains the same for
     * the whole life of the endpoint.</p>
     */
    inline DBClusterEndpoint& WithDBClusterEndpointResourceIdentifier(Aws::String&& value) { SetDBClusterEndpointResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique system-generated identifier for an endpoint. It remains the same for
     * the whole life of the endpoint.</p>
     */
    inline DBClusterEndpoint& WithDBClusterEndpointResourceIdentifier(const char* value) { SetDBClusterEndpointResourceIdentifier(value); return *this;}


    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline DBClusterEndpoint& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline DBClusterEndpoint& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline DBClusterEndpoint& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The current status of the endpoint. One of: <code>creating</code>,
     * <code>available</code>, <code>deleting</code>, <code>modifying</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the endpoint. One of: <code>creating</code>,
     * <code>available</code>, <code>deleting</code>, <code>modifying</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the endpoint. One of: <code>creating</code>,
     * <code>available</code>, <code>deleting</code>, <code>modifying</code>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the endpoint. One of: <code>creating</code>,
     * <code>available</code>, <code>deleting</code>, <code>modifying</code>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the endpoint. One of: <code>creating</code>,
     * <code>available</code>, <code>deleting</code>, <code>modifying</code>.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The current status of the endpoint. One of: <code>creating</code>,
     * <code>available</code>, <code>deleting</code>, <code>modifying</code>.</p>
     */
    inline DBClusterEndpoint& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the endpoint. One of: <code>creating</code>,
     * <code>available</code>, <code>deleting</code>, <code>modifying</code>.</p>
     */
    inline DBClusterEndpoint& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The current status of the endpoint. One of: <code>creating</code>,
     * <code>available</code>, <code>deleting</code>, <code>modifying</code>.</p>
     */
    inline DBClusterEndpoint& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>CUSTOM</code>.</p>
     */
    inline const Aws::String& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>CUSTOM</code>.</p>
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>CUSTOM</code>.</p>
     */
    inline void SetEndpointType(const Aws::String& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>CUSTOM</code>.</p>
     */
    inline void SetEndpointType(Aws::String&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>CUSTOM</code>.</p>
     */
    inline void SetEndpointType(const char* value) { m_endpointTypeHasBeenSet = true; m_endpointType.assign(value); }

    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>CUSTOM</code>.</p>
     */
    inline DBClusterEndpoint& WithEndpointType(const Aws::String& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>CUSTOM</code>.</p>
     */
    inline DBClusterEndpoint& WithEndpointType(Aws::String&& value) { SetEndpointType(std::move(value)); return *this;}

    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>CUSTOM</code>.</p>
     */
    inline DBClusterEndpoint& WithEndpointType(const char* value) { SetEndpointType(value); return *this;}


    /**
     * <p>The type associated with a custom endpoint. One of: <code>READER</code>,
     * <code>ANY</code>.</p>
     */
    inline const Aws::String& GetCustomEndpointType() const{ return m_customEndpointType; }

    /**
     * <p>The type associated with a custom endpoint. One of: <code>READER</code>,
     * <code>ANY</code>.</p>
     */
    inline bool CustomEndpointTypeHasBeenSet() const { return m_customEndpointTypeHasBeenSet; }

    /**
     * <p>The type associated with a custom endpoint. One of: <code>READER</code>,
     * <code>ANY</code>.</p>
     */
    inline void SetCustomEndpointType(const Aws::String& value) { m_customEndpointTypeHasBeenSet = true; m_customEndpointType = value; }

    /**
     * <p>The type associated with a custom endpoint. One of: <code>READER</code>,
     * <code>ANY</code>.</p>
     */
    inline void SetCustomEndpointType(Aws::String&& value) { m_customEndpointTypeHasBeenSet = true; m_customEndpointType = std::move(value); }

    /**
     * <p>The type associated with a custom endpoint. One of: <code>READER</code>,
     * <code>ANY</code>.</p>
     */
    inline void SetCustomEndpointType(const char* value) { m_customEndpointTypeHasBeenSet = true; m_customEndpointType.assign(value); }

    /**
     * <p>The type associated with a custom endpoint. One of: <code>READER</code>,
     * <code>ANY</code>.</p>
     */
    inline DBClusterEndpoint& WithCustomEndpointType(const Aws::String& value) { SetCustomEndpointType(value); return *this;}

    /**
     * <p>The type associated with a custom endpoint. One of: <code>READER</code>,
     * <code>ANY</code>.</p>
     */
    inline DBClusterEndpoint& WithCustomEndpointType(Aws::String&& value) { SetCustomEndpointType(std::move(value)); return *this;}

    /**
     * <p>The type associated with a custom endpoint. One of: <code>READER</code>,
     * <code>ANY</code>.</p>
     */
    inline DBClusterEndpoint& WithCustomEndpointType(const char* value) { SetCustomEndpointType(value); return *this;}


    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStaticMembers() const{ return m_staticMembers; }

    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline bool StaticMembersHasBeenSet() const { return m_staticMembersHasBeenSet; }

    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline void SetStaticMembers(const Aws::Vector<Aws::String>& value) { m_staticMembersHasBeenSet = true; m_staticMembers = value; }

    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline void SetStaticMembers(Aws::Vector<Aws::String>&& value) { m_staticMembersHasBeenSet = true; m_staticMembers = std::move(value); }

    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline DBClusterEndpoint& WithStaticMembers(const Aws::Vector<Aws::String>& value) { SetStaticMembers(value); return *this;}

    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline DBClusterEndpoint& WithStaticMembers(Aws::Vector<Aws::String>&& value) { SetStaticMembers(std::move(value)); return *this;}

    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline DBClusterEndpoint& AddStaticMembers(const Aws::String& value) { m_staticMembersHasBeenSet = true; m_staticMembers.push_back(value); return *this; }

    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline DBClusterEndpoint& AddStaticMembers(Aws::String&& value) { m_staticMembersHasBeenSet = true; m_staticMembers.push_back(std::move(value)); return *this; }

    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline DBClusterEndpoint& AddStaticMembers(const char* value) { m_staticMembersHasBeenSet = true; m_staticMembers.push_back(value); return *this; }


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
    inline bool ExcludedMembersHasBeenSet() const { return m_excludedMembersHasBeenSet; }

    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline void SetExcludedMembers(const Aws::Vector<Aws::String>& value) { m_excludedMembersHasBeenSet = true; m_excludedMembers = value; }

    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline void SetExcludedMembers(Aws::Vector<Aws::String>&& value) { m_excludedMembersHasBeenSet = true; m_excludedMembers = std::move(value); }

    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline DBClusterEndpoint& WithExcludedMembers(const Aws::Vector<Aws::String>& value) { SetExcludedMembers(value); return *this;}

    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline DBClusterEndpoint& WithExcludedMembers(Aws::Vector<Aws::String>&& value) { SetExcludedMembers(std::move(value)); return *this;}

    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline DBClusterEndpoint& AddExcludedMembers(const Aws::String& value) { m_excludedMembersHasBeenSet = true; m_excludedMembers.push_back(value); return *this; }

    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline DBClusterEndpoint& AddExcludedMembers(Aws::String&& value) { m_excludedMembersHasBeenSet = true; m_excludedMembers.push_back(std::move(value)); return *this; }

    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline DBClusterEndpoint& AddExcludedMembers(const char* value) { m_excludedMembersHasBeenSet = true; m_excludedMembers.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) for the endpoint.</p>
     */
    inline const Aws::String& GetDBClusterEndpointArn() const{ return m_dBClusterEndpointArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the endpoint.</p>
     */
    inline bool DBClusterEndpointArnHasBeenSet() const { return m_dBClusterEndpointArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the endpoint.</p>
     */
    inline void SetDBClusterEndpointArn(const Aws::String& value) { m_dBClusterEndpointArnHasBeenSet = true; m_dBClusterEndpointArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the endpoint.</p>
     */
    inline void SetDBClusterEndpointArn(Aws::String&& value) { m_dBClusterEndpointArnHasBeenSet = true; m_dBClusterEndpointArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the endpoint.</p>
     */
    inline void SetDBClusterEndpointArn(const char* value) { m_dBClusterEndpointArnHasBeenSet = true; m_dBClusterEndpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the endpoint.</p>
     */
    inline DBClusterEndpoint& WithDBClusterEndpointArn(const Aws::String& value) { SetDBClusterEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the endpoint.</p>
     */
    inline DBClusterEndpoint& WithDBClusterEndpointArn(Aws::String&& value) { SetDBClusterEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the endpoint.</p>
     */
    inline DBClusterEndpoint& WithDBClusterEndpointArn(const char* value) { SetDBClusterEndpointArn(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline bool ResponseMetadataHasBeenSet() const { return m_responseMetadataHasBeenSet; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::move(value); }

    
    inline DBClusterEndpoint& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DBClusterEndpoint& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_dBClusterEndpointIdentifier;
    bool m_dBClusterEndpointIdentifierHasBeenSet;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;

    Aws::String m_dBClusterEndpointResourceIdentifier;
    bool m_dBClusterEndpointResourceIdentifierHasBeenSet;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_endpointType;
    bool m_endpointTypeHasBeenSet;

    Aws::String m_customEndpointType;
    bool m_customEndpointTypeHasBeenSet;

    Aws::Vector<Aws::String> m_staticMembers;
    bool m_staticMembersHasBeenSet;

    Aws::Vector<Aws::String> m_excludedMembers;
    bool m_excludedMembersHasBeenSet;

    Aws::String m_dBClusterEndpointArn;
    bool m_dBClusterEndpointArnHasBeenSet;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
