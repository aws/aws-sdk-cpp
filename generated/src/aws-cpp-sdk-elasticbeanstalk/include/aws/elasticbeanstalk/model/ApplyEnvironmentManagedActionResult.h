/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ActionType.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
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
   * <p>The result message containing information about the managed
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ApplyEnvironmentManagedActionResult">AWS
   * API Reference</a></p>
   */
  class ApplyEnvironmentManagedActionResult
  {
  public:
    AWS_ELASTICBEANSTALK_API ApplyEnvironmentManagedActionResult() = default;
    AWS_ELASTICBEANSTALK_API ApplyEnvironmentManagedActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API ApplyEnvironmentManagedActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The action ID of the managed action.</p>
     */
    inline const Aws::String& GetActionId() const { return m_actionId; }
    template<typename ActionIdT = Aws::String>
    void SetActionId(ActionIdT&& value) { m_actionIdHasBeenSet = true; m_actionId = std::forward<ActionIdT>(value); }
    template<typename ActionIdT = Aws::String>
    ApplyEnvironmentManagedActionResult& WithActionId(ActionIdT&& value) { SetActionId(std::forward<ActionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the managed action.</p>
     */
    inline const Aws::String& GetActionDescription() const { return m_actionDescription; }
    template<typename ActionDescriptionT = Aws::String>
    void SetActionDescription(ActionDescriptionT&& value) { m_actionDescriptionHasBeenSet = true; m_actionDescription = std::forward<ActionDescriptionT>(value); }
    template<typename ActionDescriptionT = Aws::String>
    ApplyEnvironmentManagedActionResult& WithActionDescription(ActionDescriptionT&& value) { SetActionDescription(std::forward<ActionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of managed action.</p>
     */
    inline ActionType GetActionType() const { return m_actionType; }
    inline void SetActionType(ActionType value) { m_actionTypeHasBeenSet = true; m_actionType = value; }
    inline ApplyEnvironmentManagedActionResult& WithActionType(ActionType value) { SetActionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the managed action.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ApplyEnvironmentManagedActionResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ApplyEnvironmentManagedActionResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    Aws::String m_actionDescription;
    bool m_actionDescriptionHasBeenSet = false;

    ActionType m_actionType{ActionType::NOT_SET};
    bool m_actionTypeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
