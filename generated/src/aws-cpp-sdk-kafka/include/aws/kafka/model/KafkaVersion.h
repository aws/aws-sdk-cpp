/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/KafkaVersionStatus.h>
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

  class KafkaVersion
  {
  public:
    AWS_KAFKA_API KafkaVersion();
    AWS_KAFKA_API KafkaVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API KafkaVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetVersion() const{ return m_version; }

    
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    
    inline KafkaVersion& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    
    inline KafkaVersion& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    
    inline KafkaVersion& WithVersion(const char* value) { SetVersion(value); return *this;}


    
    inline const KafkaVersionStatus& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const KafkaVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(KafkaVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline KafkaVersion& WithStatus(const KafkaVersionStatus& value) { SetStatus(value); return *this;}

    
    inline KafkaVersion& WithStatus(KafkaVersionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    KafkaVersionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
