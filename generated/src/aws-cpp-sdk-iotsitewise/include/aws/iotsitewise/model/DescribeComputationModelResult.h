/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/ComputationModelConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotsitewise/model/ComputationModelStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/ComputationModelDataBindingValue.h>
#include <aws/iotsitewise/model/ActionDefinition.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTSiteWise
{
namespace Model
{
  class DescribeComputationModelResult
  {
  public:
    AWS_IOTSITEWISE_API DescribeComputationModelResult() = default;
    AWS_IOTSITEWISE_API DescribeComputationModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeComputationModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the computation model.</p>
     */
    inline const Aws::String& GetComputationModelId() const { return m_computationModelId; }
    template<typename ComputationModelIdT = Aws::String>
    void SetComputationModelId(ComputationModelIdT&& value) { m_computationModelIdHasBeenSet = true; m_computationModelId = std::forward<ComputationModelIdT>(value); }
    template<typename ComputationModelIdT = Aws::String>
    DescribeComputationModelResult& WithComputationModelId(ComputationModelIdT&& value) { SetComputationModelId(std::forward<ComputationModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the computation model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:computation-model/${ComputationModelId}</code>
     * </p>
     */
    inline const Aws::String& GetComputationModelArn() const { return m_computationModelArn; }
    template<typename ComputationModelArnT = Aws::String>
    void SetComputationModelArn(ComputationModelArnT&& value) { m_computationModelArnHasBeenSet = true; m_computationModelArn = std::forward<ComputationModelArnT>(value); }
    template<typename ComputationModelArnT = Aws::String>
    DescribeComputationModelResult& WithComputationModelArn(ComputationModelArnT&& value) { SetComputationModelArn(std::forward<ComputationModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the computation model.</p>
     */
    inline const Aws::String& GetComputationModelName() const { return m_computationModelName; }
    template<typename ComputationModelNameT = Aws::String>
    void SetComputationModelName(ComputationModelNameT&& value) { m_computationModelNameHasBeenSet = true; m_computationModelName = std::forward<ComputationModelNameT>(value); }
    template<typename ComputationModelNameT = Aws::String>
    DescribeComputationModelResult& WithComputationModelName(ComputationModelNameT&& value) { SetComputationModelName(std::forward<ComputationModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the computation model.</p>
     */
    inline const Aws::String& GetComputationModelDescription() const { return m_computationModelDescription; }
    template<typename ComputationModelDescriptionT = Aws::String>
    void SetComputationModelDescription(ComputationModelDescriptionT&& value) { m_computationModelDescriptionHasBeenSet = true; m_computationModelDescription = std::forward<ComputationModelDescriptionT>(value); }
    template<typename ComputationModelDescriptionT = Aws::String>
    DescribeComputationModelResult& WithComputationModelDescription(ComputationModelDescriptionT&& value) { SetComputationModelDescription(std::forward<ComputationModelDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the computation model.</p>
     */
    inline const ComputationModelConfiguration& GetComputationModelConfiguration() const { return m_computationModelConfiguration; }
    template<typename ComputationModelConfigurationT = ComputationModelConfiguration>
    void SetComputationModelConfiguration(ComputationModelConfigurationT&& value) { m_computationModelConfigurationHasBeenSet = true; m_computationModelConfiguration = std::forward<ComputationModelConfigurationT>(value); }
    template<typename ComputationModelConfigurationT = ComputationModelConfiguration>
    DescribeComputationModelResult& WithComputationModelConfiguration(ComputationModelConfigurationT&& value) { SetComputationModelConfiguration(std::forward<ComputationModelConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data binding for the computation model. Key is a variable name defined in
     * configuration. Value is a <code>ComputationModelDataBindingValue</code>
     * referenced by the variable.</p>
     */
    inline const Aws::Map<Aws::String, ComputationModelDataBindingValue>& GetComputationModelDataBinding() const { return m_computationModelDataBinding; }
    template<typename ComputationModelDataBindingT = Aws::Map<Aws::String, ComputationModelDataBindingValue>>
    void SetComputationModelDataBinding(ComputationModelDataBindingT&& value) { m_computationModelDataBindingHasBeenSet = true; m_computationModelDataBinding = std::forward<ComputationModelDataBindingT>(value); }
    template<typename ComputationModelDataBindingT = Aws::Map<Aws::String, ComputationModelDataBindingValue>>
    DescribeComputationModelResult& WithComputationModelDataBinding(ComputationModelDataBindingT&& value) { SetComputationModelDataBinding(std::forward<ComputationModelDataBindingT>(value)); return *this;}
    template<typename ComputationModelDataBindingKeyT = Aws::String, typename ComputationModelDataBindingValueT = ComputationModelDataBindingValue>
    DescribeComputationModelResult& AddComputationModelDataBinding(ComputationModelDataBindingKeyT&& key, ComputationModelDataBindingValueT&& value) {
      m_computationModelDataBindingHasBeenSet = true; m_computationModelDataBinding.emplace(std::forward<ComputationModelDataBindingKeyT>(key), std::forward<ComputationModelDataBindingValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The model creation date, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetComputationModelCreationDate() const { return m_computationModelCreationDate; }
    template<typename ComputationModelCreationDateT = Aws::Utils::DateTime>
    void SetComputationModelCreationDate(ComputationModelCreationDateT&& value) { m_computationModelCreationDateHasBeenSet = true; m_computationModelCreationDate = std::forward<ComputationModelCreationDateT>(value); }
    template<typename ComputationModelCreationDateT = Aws::Utils::DateTime>
    DescribeComputationModelResult& WithComputationModelCreationDate(ComputationModelCreationDateT&& value) { SetComputationModelCreationDate(std::forward<ComputationModelCreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the model was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetComputationModelLastUpdateDate() const { return m_computationModelLastUpdateDate; }
    template<typename ComputationModelLastUpdateDateT = Aws::Utils::DateTime>
    void SetComputationModelLastUpdateDate(ComputationModelLastUpdateDateT&& value) { m_computationModelLastUpdateDateHasBeenSet = true; m_computationModelLastUpdateDate = std::forward<ComputationModelLastUpdateDateT>(value); }
    template<typename ComputationModelLastUpdateDateT = Aws::Utils::DateTime>
    DescribeComputationModelResult& WithComputationModelLastUpdateDate(ComputationModelLastUpdateDateT&& value) { SetComputationModelLastUpdateDate(std::forward<ComputationModelLastUpdateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the asset model, which contains a state and an error
     * message if any.</p>
     */
    inline const ComputationModelStatus& GetComputationModelStatus() const { return m_computationModelStatus; }
    template<typename ComputationModelStatusT = ComputationModelStatus>
    void SetComputationModelStatus(ComputationModelStatusT&& value) { m_computationModelStatusHasBeenSet = true; m_computationModelStatus = std::forward<ComputationModelStatusT>(value); }
    template<typename ComputationModelStatusT = ComputationModelStatus>
    DescribeComputationModelResult& WithComputationModelStatus(ComputationModelStatusT&& value) { SetComputationModelStatus(std::forward<ComputationModelStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the computation model.</p>
     */
    inline const Aws::String& GetComputationModelVersion() const { return m_computationModelVersion; }
    template<typename ComputationModelVersionT = Aws::String>
    void SetComputationModelVersion(ComputationModelVersionT&& value) { m_computationModelVersionHasBeenSet = true; m_computationModelVersion = std::forward<ComputationModelVersionT>(value); }
    template<typename ComputationModelVersionT = Aws::String>
    DescribeComputationModelResult& WithComputationModelVersion(ComputationModelVersionT&& value) { SetComputationModelVersion(std::forward<ComputationModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The available actions for this computation model.</p>
     */
    inline const Aws::Vector<ActionDefinition>& GetActionDefinitions() const { return m_actionDefinitions; }
    template<typename ActionDefinitionsT = Aws::Vector<ActionDefinition>>
    void SetActionDefinitions(ActionDefinitionsT&& value) { m_actionDefinitionsHasBeenSet = true; m_actionDefinitions = std::forward<ActionDefinitionsT>(value); }
    template<typename ActionDefinitionsT = Aws::Vector<ActionDefinition>>
    DescribeComputationModelResult& WithActionDefinitions(ActionDefinitionsT&& value) { SetActionDefinitions(std::forward<ActionDefinitionsT>(value)); return *this;}
    template<typename ActionDefinitionsT = ActionDefinition>
    DescribeComputationModelResult& AddActionDefinitions(ActionDefinitionsT&& value) { m_actionDefinitionsHasBeenSet = true; m_actionDefinitions.emplace_back(std::forward<ActionDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeComputationModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_computationModelId;
    bool m_computationModelIdHasBeenSet = false;

    Aws::String m_computationModelArn;
    bool m_computationModelArnHasBeenSet = false;

    Aws::String m_computationModelName;
    bool m_computationModelNameHasBeenSet = false;

    Aws::String m_computationModelDescription;
    bool m_computationModelDescriptionHasBeenSet = false;

    ComputationModelConfiguration m_computationModelConfiguration;
    bool m_computationModelConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, ComputationModelDataBindingValue> m_computationModelDataBinding;
    bool m_computationModelDataBindingHasBeenSet = false;

    Aws::Utils::DateTime m_computationModelCreationDate{};
    bool m_computationModelCreationDateHasBeenSet = false;

    Aws::Utils::DateTime m_computationModelLastUpdateDate{};
    bool m_computationModelLastUpdateDateHasBeenSet = false;

    ComputationModelStatus m_computationModelStatus;
    bool m_computationModelStatusHasBeenSet = false;

    Aws::String m_computationModelVersion;
    bool m_computationModelVersionHasBeenSet = false;

    Aws::Vector<ActionDefinition> m_actionDefinitions;
    bool m_actionDefinitionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
