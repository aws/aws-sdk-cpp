﻿/**
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
    AWS_FIREHOSE_API ProcessingConfiguration();
    AWS_FIREHOSE_API ProcessingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API ProcessingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables or disables data processing.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ProcessingConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data processors.</p>
     */
    inline const Aws::Vector<Processor>& GetProcessors() const{ return m_processors; }
    inline bool ProcessorsHasBeenSet() const { return m_processorsHasBeenSet; }
    inline void SetProcessors(const Aws::Vector<Processor>& value) { m_processorsHasBeenSet = true; m_processors = value; }
    inline void SetProcessors(Aws::Vector<Processor>&& value) { m_processorsHasBeenSet = true; m_processors = std::move(value); }
    inline ProcessingConfiguration& WithProcessors(const Aws::Vector<Processor>& value) { SetProcessors(value); return *this;}
    inline ProcessingConfiguration& WithProcessors(Aws::Vector<Processor>&& value) { SetProcessors(std::move(value)); return *this;}
    inline ProcessingConfiguration& AddProcessors(const Processor& value) { m_processorsHasBeenSet = true; m_processors.push_back(value); return *this; }
    inline ProcessingConfiguration& AddProcessors(Processor&& value) { m_processorsHasBeenSet = true; m_processors.push_back(std::move(value)); return *this; }
    ///@}
  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::Vector<Processor> m_processors;
    bool m_processorsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
