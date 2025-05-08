/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/IntegrationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/IntegrationConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/IntegrationError.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>A structure for an integration that writes data into a
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/InboundIntegration">AWS
   * API Reference</a></p>
   */
  class InboundIntegration
  {
  public:
    AWS_GLUE_API InboundIntegration() = default;
    AWS_GLUE_API InboundIntegration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API InboundIntegration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the source resource for the integration.</p>
     */
    inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    template<typename SourceArnT = Aws::String>
    void SetSourceArn(SourceArnT&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::forward<SourceArnT>(value); }
    template<typename SourceArnT = Aws::String>
    InboundIntegration& WithSourceArn(SourceArnT&& value) { SetSourceArn(std::forward<SourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the target resource for the integration.</p>
     */
    inline const Aws::String& GetTargetArn() const { return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    template<typename TargetArnT = Aws::String>
    void SetTargetArn(TargetArnT&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::forward<TargetArnT>(value); }
    template<typename TargetArnT = Aws::String>
    InboundIntegration& WithTargetArn(TargetArnT&& value) { SetTargetArn(std::forward<TargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the zero-ETL integration.</p>
     */
    inline const Aws::String& GetIntegrationArn() const { return m_integrationArn; }
    inline bool IntegrationArnHasBeenSet() const { return m_integrationArnHasBeenSet; }
    template<typename IntegrationArnT = Aws::String>
    void SetIntegrationArn(IntegrationArnT&& value) { m_integrationArnHasBeenSet = true; m_integrationArn = std::forward<IntegrationArnT>(value); }
    template<typename IntegrationArnT = Aws::String>
    InboundIntegration& WithIntegrationArn(IntegrationArnT&& value) { SetIntegrationArn(std::forward<IntegrationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The possible statuses are:</p> <ul> <li> <p>CREATING: The integration is
     * being created.</p> </li> <li> <p>ACTIVE: The integration creation succeeds.</p>
     * </li> <li> <p>MODIFYING: The integration is being modified.</p> </li> <li>
     * <p>FAILED: The integration creation fails. </p> </li> <li> <p>DELETING: The
     * integration is deleted.</p> </li> <li> <p>SYNCING: The integration is
     * synchronizing.</p> </li> <li> <p>NEEDS_ATTENTION: The integration needs
     * attention, such as synchronization.</p> </li> </ul>
     */
    inline IntegrationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(IntegrationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline InboundIntegration& WithStatus(IntegrationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the integration was created, in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    InboundIntegration& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Properties associated with the integration.</p>
     */
    inline const IntegrationConfig& GetIntegrationConfig() const { return m_integrationConfig; }
    inline bool IntegrationConfigHasBeenSet() const { return m_integrationConfigHasBeenSet; }
    template<typename IntegrationConfigT = IntegrationConfig>
    void SetIntegrationConfig(IntegrationConfigT&& value) { m_integrationConfigHasBeenSet = true; m_integrationConfig = std::forward<IntegrationConfigT>(value); }
    template<typename IntegrationConfigT = IntegrationConfig>
    InboundIntegration& WithIntegrationConfig(IntegrationConfigT&& value) { SetIntegrationConfig(std::forward<IntegrationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of errors associated with the integration.</p>
     */
    inline const Aws::Vector<IntegrationError>& GetErrors() const { return m_errors; }
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }
    template<typename ErrorsT = Aws::Vector<IntegrationError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<IntegrationError>>
    InboundIntegration& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = IntegrationError>
    InboundIntegration& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::String m_integrationArn;
    bool m_integrationArnHasBeenSet = false;

    IntegrationStatus m_status{IntegrationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    IntegrationConfig m_integrationConfig;
    bool m_integrationConfigHasBeenSet = false;

    Aws::Vector<IntegrationError> m_errors;
    bool m_errorsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
