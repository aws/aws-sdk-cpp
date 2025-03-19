/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/firehose/model/Processor.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Describes a data processing configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/ProcessingConfiguration">AWS
   * API Reference</a></p>
   */
  class ProcessingConfiguration
  {
  public:
    AWS_FIREHOSE_API ProcessingConfiguration() = default;
    AWS_FIREHOSE_API ProcessingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API ProcessingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables or disables data processing.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ProcessingConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data processors.</p>
     */
    inline const Aws::Vector<Processor>& GetProcessors() const { return m_processors; }
    inline bool ProcessorsHasBeenSet() const { return m_processorsHasBeenSet; }
    template<typename ProcessorsT = Aws::Vector<Processor>>
    void SetProcessors(ProcessorsT&& value) { m_processorsHasBeenSet = true; m_processors = std::forward<ProcessorsT>(value); }
    template<typename ProcessorsT = Aws::Vector<Processor>>
    ProcessingConfiguration& WithProcessors(ProcessorsT&& value) { SetProcessors(std::forward<ProcessorsT>(value)); return *this;}
    template<typename ProcessorsT = Processor>
    ProcessingConfiguration& AddProcessors(ProcessorsT&& value) { m_processorsHasBeenSet = true; m_processors.emplace_back(std::forward<ProcessorsT>(value)); return *this; }
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::Vector<Processor> m_processors;
    bool m_processorsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
