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
            <p>Contains source Kafka versions and compatible target Kafka
   * versions.</p>
        <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/CompatibleKafkaVersion">AWS
   * API Reference</a></p>
   */
  class AWS_KAFKA_API CompatibleKafkaVersion
  {
  public:
    CompatibleKafkaVersion();
    CompatibleKafkaVersion(Aws::Utils::Json::JsonView jsonValue);
    CompatibleKafkaVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>A Kafka version.</p>
            
     */
    inline const Aws::String& GetSourceVersion() const{ return m_sourceVersion; }

    /**
     * 
            <p>A Kafka version.</p>
            
     */
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }

    /**
     * 
            <p>A Kafka version.</p>
            
     */
    inline void SetSourceVersion(const Aws::String& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = value; }

    /**
     * 
            <p>A Kafka version.</p>
            
     */
    inline void SetSourceVersion(Aws::String&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::move(value); }

    /**
     * 
            <p>A Kafka version.</p>
            
     */
    inline void SetSourceVersion(const char* value) { m_sourceVersionHasBeenSet = true; m_sourceVersion.assign(value); }

    /**
     * 
            <p>A Kafka version.</p>
            
     */
    inline CompatibleKafkaVersion& WithSourceVersion(const Aws::String& value) { SetSourceVersion(value); return *this;}

    /**
     * 
            <p>A Kafka version.</p>
            
     */
    inline CompatibleKafkaVersion& WithSourceVersion(Aws::String&& value) { SetSourceVersion(std::move(value)); return *this;}

    /**
     * 
            <p>A Kafka version.</p>
            
     */
    inline CompatibleKafkaVersion& WithSourceVersion(const char* value) { SetSourceVersion(value); return *this;}


    /**
     * 
            <p>A list of Kafka versions.</p>
            
     */
    inline const Aws::Vector<Aws::String>& GetTargetVersions() const{ return m_targetVersions; }

    /**
     * 
            <p>A list of Kafka versions.</p>
            
     */
    inline bool TargetVersionsHasBeenSet() const { return m_targetVersionsHasBeenSet; }

    /**
     * 
            <p>A list of Kafka versions.</p>
            
     */
    inline void SetTargetVersions(const Aws::Vector<Aws::String>& value) { m_targetVersionsHasBeenSet = true; m_targetVersions = value; }

    /**
     * 
            <p>A list of Kafka versions.</p>
            
     */
    inline void SetTargetVersions(Aws::Vector<Aws::String>&& value) { m_targetVersionsHasBeenSet = true; m_targetVersions = std::move(value); }

    /**
     * 
            <p>A list of Kafka versions.</p>
            
     */
    inline CompatibleKafkaVersion& WithTargetVersions(const Aws::Vector<Aws::String>& value) { SetTargetVersions(value); return *this;}

    /**
     * 
            <p>A list of Kafka versions.</p>
            
     */
    inline CompatibleKafkaVersion& WithTargetVersions(Aws::Vector<Aws::String>&& value) { SetTargetVersions(std::move(value)); return *this;}

    /**
     * 
            <p>A list of Kafka versions.</p>
            
     */
    inline CompatibleKafkaVersion& AddTargetVersions(const Aws::String& value) { m_targetVersionsHasBeenSet = true; m_targetVersions.push_back(value); return *this; }

    /**
     * 
            <p>A list of Kafka versions.</p>
            
     */
    inline CompatibleKafkaVersion& AddTargetVersions(Aws::String&& value) { m_targetVersionsHasBeenSet = true; m_targetVersions.push_back(std::move(value)); return *this; }

    /**
     * 
            <p>A list of Kafka versions.</p>
            
     */
    inline CompatibleKafkaVersion& AddTargetVersions(const char* value) { m_targetVersionsHasBeenSet = true; m_targetVersions.push_back(value); return *this; }

  private:

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet;

    Aws::Vector<Aws::String> m_targetVersions;
    bool m_targetVersionsHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
