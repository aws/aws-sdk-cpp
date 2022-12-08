/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/ManagedAction.h>
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
namespace ElasticBeanstalk
{
namespace Model
{
  /**
   * <p>The result message containing a list of managed actions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironmentManagedActionsResult">AWS
   * API Reference</a></p>
   */
  class DescribeEnvironmentManagedActionsResult
  {
  public:
    AWS_ELASTICBEANSTALK_API DescribeEnvironmentManagedActionsResult();
    AWS_ELASTICBEANSTALK_API DescribeEnvironmentManagedActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API DescribeEnvironmentManagedActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline void SetManagedActions(Aws::Vector<ManagedAction>&& value) { m_managedActions = std::move(value); }

    /**
     * <p>A list of upcoming and in-progress managed actions.</p>
     */
    inline DescribeEnvironmentManagedActionsResult& WithManagedActions(const Aws::Vector<ManagedAction>& value) { SetManagedActions(value); return *this;}

    /**
     * <p>A list of upcoming and in-progress managed actions.</p>
     */
    inline DescribeEnvironmentManagedActionsResult& WithManagedActions(Aws::Vector<ManagedAction>&& value) { SetManagedActions(std::move(value)); return *this;}

    /**
     * <p>A list of upcoming and in-progress managed actions.</p>
     */
    inline DescribeEnvironmentManagedActionsResult& AddManagedActions(const ManagedAction& value) { m_managedActions.push_back(value); return *this; }

    /**
     * <p>A list of upcoming and in-progress managed actions.</p>
     */
    inline DescribeEnvironmentManagedActionsResult& AddManagedActions(ManagedAction&& value) { m_managedActions.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeEnvironmentManagedActionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeEnvironmentManagedActionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ManagedAction> m_managedActions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
