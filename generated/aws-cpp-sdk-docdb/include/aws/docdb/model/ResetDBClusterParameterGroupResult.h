﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/docdb/model/ResponseMetadata.h>
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
namespace DocDB
{
namespace Model
{
  /**
   * <p>Contains the name of a cluster parameter group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DBClusterParameterGroupNameMessage">AWS
   * API Reference</a></p>
   */
  class AWS_DOCDB_API ResetDBClusterParameterGroupResult
  {
  public:
    ResetDBClusterParameterGroupResult();
    ResetDBClusterParameterGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ResetDBClusterParameterGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The name of a cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be from 1 to 255 letters or numbers.</p> </li> <li> <p>The first
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>  <p>This value is stored
     * as a lowercase string.</p> 
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const{ return m_dBClusterParameterGroupName; }

    /**
     * <p>The name of a cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be from 1 to 255 letters or numbers.</p> </li> <li> <p>The first
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>  <p>This value is stored
     * as a lowercase string.</p> 
     */
    inline void SetDBClusterParameterGroupName(const Aws::String& value) { m_dBClusterParameterGroupName = value; }

    /**
     * <p>The name of a cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be from 1 to 255 letters or numbers.</p> </li> <li> <p>The first
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>  <p>This value is stored
     * as a lowercase string.</p> 
     */
    inline void SetDBClusterParameterGroupName(Aws::String&& value) { m_dBClusterParameterGroupName = std::move(value); }

    /**
     * <p>The name of a cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be from 1 to 255 letters or numbers.</p> </li> <li> <p>The first
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>  <p>This value is stored
     * as a lowercase string.</p> 
     */
    inline void SetDBClusterParameterGroupName(const char* value) { m_dBClusterParameterGroupName.assign(value); }

    /**
     * <p>The name of a cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be from 1 to 255 letters or numbers.</p> </li> <li> <p>The first
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>  <p>This value is stored
     * as a lowercase string.</p> 
     */
    inline ResetDBClusterParameterGroupResult& WithDBClusterParameterGroupName(const Aws::String& value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p>The name of a cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be from 1 to 255 letters or numbers.</p> </li> <li> <p>The first
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>  <p>This value is stored
     * as a lowercase string.</p> 
     */
    inline ResetDBClusterParameterGroupResult& WithDBClusterParameterGroupName(Aws::String&& value) { SetDBClusterParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of a cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be from 1 to 255 letters or numbers.</p> </li> <li> <p>The first
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>  <p>This value is stored
     * as a lowercase string.</p> 
     */
    inline ResetDBClusterParameterGroupResult& WithDBClusterParameterGroupName(const char* value) { SetDBClusterParameterGroupName(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ResetDBClusterParameterGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ResetDBClusterParameterGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_dBClusterParameterGroupName;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
