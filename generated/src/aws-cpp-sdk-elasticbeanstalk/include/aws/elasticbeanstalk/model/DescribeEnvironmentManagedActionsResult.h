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
    AWS_ELASTICBEANSTALK_API DescribeEnvironmentManagedActionsResult() = default;
    AWS_ELASTICBEANSTALK_API DescribeEnvironmentManagedActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API DescribeEnvironmentManagedActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of upcoming and in-progress managed actions.</p>
     */
    inline const Aws::Vector<ManagedAction>& GetManagedActions() const { return m_managedActions; }
    template<typename ManagedActionsT = Aws::Vector<ManagedAction>>
    void SetManagedActions(ManagedActionsT&& value) { m_managedActionsHasBeenSet = true; m_managedActions = std::forward<ManagedActionsT>(value); }
    template<typename ManagedActionsT = Aws::Vector<ManagedAction>>
    DescribeEnvironmentManagedActionsResult& WithManagedActions(ManagedActionsT&& value) { SetManagedActions(std::forward<ManagedActionsT>(value)); return *this;}
    template<typename ManagedActionsT = ManagedAction>
    DescribeEnvironmentManagedActionsResult& AddManagedActions(ManagedActionsT&& value) { m_managedActionsHasBeenSet = true; m_managedActions.emplace_back(std::forward<ManagedActionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeEnvironmentManagedActionsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ManagedAction> m_managedActions;
    bool m_managedActionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
