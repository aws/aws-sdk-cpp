/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>Contains source Apache Kafka versions and compatible target
   * Apache Kafka versions.</p>
        <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/CompatibleKafkaVersion">AWS
   * API Reference</a></p>
   */
  class CompatibleKafkaVersion
  {
  public:
    AWS_KAFKA_API CompatibleKafkaVersion() = default;
    AWS_KAFKA_API CompatibleKafkaVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API CompatibleKafkaVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>An Apache Kafka version.</p>
            
     */
    inline const Aws::String& GetSourceVersion() const { return m_sourceVersion; }
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }
    template<typename SourceVersionT = Aws::String>
    void SetSourceVersion(SourceVersionT&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::forward<SourceVersionT>(value); }
    template<typename SourceVersionT = Aws::String>
    CompatibleKafkaVersion& WithSourceVersion(SourceVersionT&& value) { SetSourceVersion(std::forward<SourceVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>A list of Apache Kafka versions.</p>
            
     */
    inline const Aws::Vector<Aws::String>& GetTargetVersions() const { return m_targetVersions; }
    inline bool TargetVersionsHasBeenSet() const { return m_targetVersionsHasBeenSet; }
    template<typename TargetVersionsT = Aws::Vector<Aws::String>>
    void SetTargetVersions(TargetVersionsT&& value) { m_targetVersionsHasBeenSet = true; m_targetVersions = std::forward<TargetVersionsT>(value); }
    template<typename TargetVersionsT = Aws::Vector<Aws::String>>
    CompatibleKafkaVersion& WithTargetVersions(TargetVersionsT&& value) { SetTargetVersions(std::forward<TargetVersionsT>(value)); return *this;}
    template<typename TargetVersionsT = Aws::String>
    CompatibleKafkaVersion& AddTargetVersions(TargetVersionsT&& value) { m_targetVersionsHasBeenSet = true; m_targetVersions.emplace_back(std::forward<TargetVersionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetVersions;
    bool m_targetVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
