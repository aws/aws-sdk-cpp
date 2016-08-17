/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/ManagedAction.h>

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
namespace ElasticBeanstalk
{
namespace Model
{
  /**
   * <p>The result message containing a list of managed actions.</p>
   */
  class AWS_ELASTICBEANSTALK_API DescribeEnvironmentManagedActionsResult
  {
  public:
    DescribeEnvironmentManagedActionsResult();
    DescribeEnvironmentManagedActionsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeEnvironmentManagedActionsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A list of upcoming and in-progress managed actions.</p>
     */
    inline const Aws::Vector<ManagedAction>& GetManagedActions() const{ return m_managedActions; }

    /**
     * <p>A list of upcoming and in-progress managed actions.</p>
     */
    inline void SetManagedActions(const Aws::Vector<ManagedAction>& value) { m_managedActions = value; }

    /**
     * <p>A list of upcoming and in-progress managed actions.</p>
     */
    inline void SetManagedActions(Aws::Vector<ManagedAction>&& value) { m_managedActions = value; }

    /**
     * <p>A list of upcoming and in-progress managed actions.</p>
     */
    inline DescribeEnvironmentManagedActionsResult& WithManagedActions(const Aws::Vector<ManagedAction>& value) { SetManagedActions(value); return *this;}

    /**
     * <p>A list of upcoming and in-progress managed actions.</p>
     */
    inline DescribeEnvironmentManagedActionsResult& WithManagedActions(Aws::Vector<ManagedAction>&& value) { SetManagedActions(value); return *this;}

    /**
     * <p>A list of upcoming and in-progress managed actions.</p>
     */
    inline DescribeEnvironmentManagedActionsResult& AddManagedActions(const ManagedAction& value) { m_managedActions.push_back(value); return *this; }

    /**
     * <p>A list of upcoming and in-progress managed actions.</p>
     */
    inline DescribeEnvironmentManagedActionsResult& AddManagedActions(ManagedAction&& value) { m_managedActions.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeEnvironmentManagedActionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeEnvironmentManagedActionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<ManagedAction> m_managedActions;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws