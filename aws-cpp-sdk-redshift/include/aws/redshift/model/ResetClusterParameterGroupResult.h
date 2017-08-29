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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterParameterGroupNameMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API ResetClusterParameterGroupResult
  {
  public:
    ResetClusterParameterGroupResult();
    ResetClusterParameterGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ResetClusterParameterGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The name of the cluster parameter group.</p>
     */
    inline const Aws::String& GetParameterGroupName() const{ return m_parameterGroupName; }

    /**
     * <p>The name of the cluster parameter group.</p>
     */
    inline void SetParameterGroupName(const Aws::String& value) { m_parameterGroupName = value; }

    /**
     * <p>The name of the cluster parameter group.</p>
     */
    inline void SetParameterGroupName(Aws::String&& value) { m_parameterGroupName = std::move(value); }

    /**
     * <p>The name of the cluster parameter group.</p>
     */
    inline void SetParameterGroupName(const char* value) { m_parameterGroupName.assign(value); }

    /**
     * <p>The name of the cluster parameter group.</p>
     */
    inline ResetClusterParameterGroupResult& WithParameterGroupName(const Aws::String& value) { SetParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cluster parameter group.</p>
     */
    inline ResetClusterParameterGroupResult& WithParameterGroupName(Aws::String&& value) { SetParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster parameter group.</p>
     */
    inline ResetClusterParameterGroupResult& WithParameterGroupName(const char* value) { SetParameterGroupName(value); return *this;}


    /**
     * <p>The status of the parameter group. For example, if you made a change to a
     * parameter group name-value pair, then the change could be pending a reboot of an
     * associated cluster.</p>
     */
    inline const Aws::String& GetParameterGroupStatus() const{ return m_parameterGroupStatus; }

    /**
     * <p>The status of the parameter group. For example, if you made a change to a
     * parameter group name-value pair, then the change could be pending a reboot of an
     * associated cluster.</p>
     */
    inline void SetParameterGroupStatus(const Aws::String& value) { m_parameterGroupStatus = value; }

    /**
     * <p>The status of the parameter group. For example, if you made a change to a
     * parameter group name-value pair, then the change could be pending a reboot of an
     * associated cluster.</p>
     */
    inline void SetParameterGroupStatus(Aws::String&& value) { m_parameterGroupStatus = std::move(value); }

    /**
     * <p>The status of the parameter group. For example, if you made a change to a
     * parameter group name-value pair, then the change could be pending a reboot of an
     * associated cluster.</p>
     */
    inline void SetParameterGroupStatus(const char* value) { m_parameterGroupStatus.assign(value); }

    /**
     * <p>The status of the parameter group. For example, if you made a change to a
     * parameter group name-value pair, then the change could be pending a reboot of an
     * associated cluster.</p>
     */
    inline ResetClusterParameterGroupResult& WithParameterGroupStatus(const Aws::String& value) { SetParameterGroupStatus(value); return *this;}

    /**
     * <p>The status of the parameter group. For example, if you made a change to a
     * parameter group name-value pair, then the change could be pending a reboot of an
     * associated cluster.</p>
     */
    inline ResetClusterParameterGroupResult& WithParameterGroupStatus(Aws::String&& value) { SetParameterGroupStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the parameter group. For example, if you made a change to a
     * parameter group name-value pair, then the change could be pending a reboot of an
     * associated cluster.</p>
     */
    inline ResetClusterParameterGroupResult& WithParameterGroupStatus(const char* value) { SetParameterGroupStatus(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ResetClusterParameterGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ResetClusterParameterGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_parameterGroupName;

    Aws::String m_parameterGroupStatus;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
