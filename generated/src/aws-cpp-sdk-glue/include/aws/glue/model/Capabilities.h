/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/AuthenticationType.h>
#include <aws/glue/model/DataOperation.h>
#include <aws/glue/model/ComputeEnvironment.h>
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
   * <p>Specifies the supported authentication types returned by the
   * <code>DescribeConnectionType</code> API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Capabilities">AWS
   * API Reference</a></p>
   */
  class Capabilities
  {
  public:
    AWS_GLUE_API Capabilities() = default;
    AWS_GLUE_API Capabilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Capabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of supported authentication types.</p>
     */
    inline const Aws::Vector<AuthenticationType>& GetSupportedAuthenticationTypes() const { return m_supportedAuthenticationTypes; }
    inline bool SupportedAuthenticationTypesHasBeenSet() const { return m_supportedAuthenticationTypesHasBeenSet; }
    template<typename SupportedAuthenticationTypesT = Aws::Vector<AuthenticationType>>
    void SetSupportedAuthenticationTypes(SupportedAuthenticationTypesT&& value) { m_supportedAuthenticationTypesHasBeenSet = true; m_supportedAuthenticationTypes = std::forward<SupportedAuthenticationTypesT>(value); }
    template<typename SupportedAuthenticationTypesT = Aws::Vector<AuthenticationType>>
    Capabilities& WithSupportedAuthenticationTypes(SupportedAuthenticationTypesT&& value) { SetSupportedAuthenticationTypes(std::forward<SupportedAuthenticationTypesT>(value)); return *this;}
    inline Capabilities& AddSupportedAuthenticationTypes(AuthenticationType value) { m_supportedAuthenticationTypesHasBeenSet = true; m_supportedAuthenticationTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of supported data operations.</p>
     */
    inline const Aws::Vector<DataOperation>& GetSupportedDataOperations() const { return m_supportedDataOperations; }
    inline bool SupportedDataOperationsHasBeenSet() const { return m_supportedDataOperationsHasBeenSet; }
    template<typename SupportedDataOperationsT = Aws::Vector<DataOperation>>
    void SetSupportedDataOperations(SupportedDataOperationsT&& value) { m_supportedDataOperationsHasBeenSet = true; m_supportedDataOperations = std::forward<SupportedDataOperationsT>(value); }
    template<typename SupportedDataOperationsT = Aws::Vector<DataOperation>>
    Capabilities& WithSupportedDataOperations(SupportedDataOperationsT&& value) { SetSupportedDataOperations(std::forward<SupportedDataOperationsT>(value)); return *this;}
    inline Capabilities& AddSupportedDataOperations(DataOperation value) { m_supportedDataOperationsHasBeenSet = true; m_supportedDataOperations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of supported compute environments.</p>
     */
    inline const Aws::Vector<ComputeEnvironment>& GetSupportedComputeEnvironments() const { return m_supportedComputeEnvironments; }
    inline bool SupportedComputeEnvironmentsHasBeenSet() const { return m_supportedComputeEnvironmentsHasBeenSet; }
    template<typename SupportedComputeEnvironmentsT = Aws::Vector<ComputeEnvironment>>
    void SetSupportedComputeEnvironments(SupportedComputeEnvironmentsT&& value) { m_supportedComputeEnvironmentsHasBeenSet = true; m_supportedComputeEnvironments = std::forward<SupportedComputeEnvironmentsT>(value); }
    template<typename SupportedComputeEnvironmentsT = Aws::Vector<ComputeEnvironment>>
    Capabilities& WithSupportedComputeEnvironments(SupportedComputeEnvironmentsT&& value) { SetSupportedComputeEnvironments(std::forward<SupportedComputeEnvironmentsT>(value)); return *this;}
    inline Capabilities& AddSupportedComputeEnvironments(ComputeEnvironment value) { m_supportedComputeEnvironmentsHasBeenSet = true; m_supportedComputeEnvironments.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<AuthenticationType> m_supportedAuthenticationTypes;
    bool m_supportedAuthenticationTypesHasBeenSet = false;

    Aws::Vector<DataOperation> m_supportedDataOperations;
    bool m_supportedDataOperationsHasBeenSet = false;

    Aws::Vector<ComputeEnvironment> m_supportedComputeEnvironments;
    bool m_supportedComputeEnvironmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
