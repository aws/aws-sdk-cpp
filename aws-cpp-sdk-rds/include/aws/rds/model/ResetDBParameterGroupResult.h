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
   * <p> Contains the result of a successful invocation of the
   * <code>ModifyDBParameterGroup</code> or <code>ResetDBParameterGroup</code>
   * action. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBParameterGroupNameMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API ResetDBParameterGroupResult
  {
  public:
    ResetDBParameterGroupResult();
    ResetDBParameterGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ResetDBParameterGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Provides the name of the DB parameter group.</p>
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }

    /**
     * <p>Provides the name of the DB parameter group.</p>
     */
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupName = value; }

    /**
     * <p>Provides the name of the DB parameter group.</p>
     */
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupName = std::move(value); }

    /**
     * <p>Provides the name of the DB parameter group.</p>
     */
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupName.assign(value); }

    /**
     * <p>Provides the name of the DB parameter group.</p>
     */
    inline ResetDBParameterGroupResult& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}

    /**
     * <p>Provides the name of the DB parameter group.</p>
     */
    inline ResetDBParameterGroupResult& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>Provides the name of the DB parameter group.</p>
     */
    inline ResetDBParameterGroupResult& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ResetDBParameterGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ResetDBParameterGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_dBParameterGroupName;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
