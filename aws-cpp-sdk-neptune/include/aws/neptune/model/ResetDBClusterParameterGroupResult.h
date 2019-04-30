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
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune/model/ResponseMetadata.h>
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
namespace Neptune
{
namespace Model
{
  class AWS_NEPTUNE_API ResetDBClusterParameterGroupResult
  {
  public:
    ResetDBClusterParameterGroupResult();
    ResetDBClusterParameterGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ResetDBClusterParameterGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 letters or numbers.</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul> <note> <p>This value is stored as a
     * lowercase string.</p> </note>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const{ return m_dBClusterParameterGroupName; }

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 letters or numbers.</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul> <note> <p>This value is stored as a
     * lowercase string.</p> </note>
     */
    inline void SetDBClusterParameterGroupName(const Aws::String& value) { m_dBClusterParameterGroupName = value; }

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 letters or numbers.</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul> <note> <p>This value is stored as a
     * lowercase string.</p> </note>
     */
    inline void SetDBClusterParameterGroupName(Aws::String&& value) { m_dBClusterParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 letters or numbers.</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul> <note> <p>This value is stored as a
     * lowercase string.</p> </note>
     */
    inline void SetDBClusterParameterGroupName(const char* value) { m_dBClusterParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 letters or numbers.</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul> <note> <p>This value is stored as a
     * lowercase string.</p> </note>
     */
    inline ResetDBClusterParameterGroupResult& WithDBClusterParameterGroupName(const Aws::String& value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 letters or numbers.</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul> <note> <p>This value is stored as a
     * lowercase string.</p> </note>
     */
    inline ResetDBClusterParameterGroupResult& WithDBClusterParameterGroupName(Aws::String&& value) { SetDBClusterParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 letters or numbers.</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul> <note> <p>This value is stored as a
     * lowercase string.</p> </note>
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
} // namespace Neptune
} // namespace Aws
