/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/GroundStationRequest.h>
#include <aws/groundstation/model/EphemerisData.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace GroundStation
{
namespace Model
{

  /**
   */
  class CreateEphemerisRequest : public GroundStationRequest
  {
  public:
    AWS_GROUNDSTATION_API CreateEphemerisRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEphemeris"; }

    AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;


    /**
     * <p>Whether to set the ephemeris status to <code>ENABLED</code> after
     * validation.</p> <p>Setting this to false will set the ephemeris status to
     * <code>DISABLED</code> after validation.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Whether to set the ephemeris status to <code>ENABLED</code> after
     * validation.</p> <p>Setting this to false will set the ephemeris status to
     * <code>DISABLED</code> after validation.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Whether to set the ephemeris status to <code>ENABLED</code> after
     * validation.</p> <p>Setting this to false will set the ephemeris status to
     * <code>DISABLED</code> after validation.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Whether to set the ephemeris status to <code>ENABLED</code> after
     * validation.</p> <p>Setting this to false will set the ephemeris status to
     * <code>DISABLED</code> after validation.</p>
     */
    inline CreateEphemerisRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Ephemeris data.</p>
     */
    inline const EphemerisData& GetEphemeris() const{ return m_ephemeris; }

    /**
     * <p>Ephemeris data.</p>
     */
    inline bool EphemerisHasBeenSet() const { return m_ephemerisHasBeenSet; }

    /**
     * <p>Ephemeris data.</p>
     */
    inline void SetEphemeris(const EphemerisData& value) { m_ephemerisHasBeenSet = true; m_ephemeris = value; }

    /**
     * <p>Ephemeris data.</p>
     */
    inline void SetEphemeris(EphemerisData&& value) { m_ephemerisHasBeenSet = true; m_ephemeris = std::move(value); }

    /**
     * <p>Ephemeris data.</p>
     */
    inline CreateEphemerisRequest& WithEphemeris(const EphemerisData& value) { SetEphemeris(value); return *this;}

    /**
     * <p>Ephemeris data.</p>
     */
    inline CreateEphemerisRequest& WithEphemeris(EphemerisData&& value) { SetEphemeris(std::move(value)); return *this;}


    /**
     * <p>An overall expiration time for the ephemeris in UTC, after which it will
     * become <code>EXPIRED</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTime() const{ return m_expirationTime; }

    /**
     * <p>An overall expiration time for the ephemeris in UTC, after which it will
     * become <code>EXPIRED</code>.</p>
     */
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }

    /**
     * <p>An overall expiration time for the ephemeris in UTC, after which it will
     * become <code>EXPIRED</code>.</p>
     */
    inline void SetExpirationTime(const Aws::Utils::DateTime& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = value; }

    /**
     * <p>An overall expiration time for the ephemeris in UTC, after which it will
     * become <code>EXPIRED</code>.</p>
     */
    inline void SetExpirationTime(Aws::Utils::DateTime&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::move(value); }

    /**
     * <p>An overall expiration time for the ephemeris in UTC, after which it will
     * become <code>EXPIRED</code>.</p>
     */
    inline CreateEphemerisRequest& WithExpirationTime(const Aws::Utils::DateTime& value) { SetExpirationTime(value); return *this;}

    /**
     * <p>An overall expiration time for the ephemeris in UTC, after which it will
     * become <code>EXPIRED</code>.</p>
     */
    inline CreateEphemerisRequest& WithExpirationTime(Aws::Utils::DateTime&& value) { SetExpirationTime(std::move(value)); return *this;}


    /**
     * <p>The ARN of a KMS key used to encrypt the ephemeris in Ground Station.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The ARN of a KMS key used to encrypt the ephemeris in Ground Station.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The ARN of a KMS key used to encrypt the ephemeris in Ground Station.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The ARN of a KMS key used to encrypt the ephemeris in Ground Station.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The ARN of a KMS key used to encrypt the ephemeris in Ground Station.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The ARN of a KMS key used to encrypt the ephemeris in Ground Station.</p>
     */
    inline CreateEphemerisRequest& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The ARN of a KMS key used to encrypt the ephemeris in Ground Station.</p>
     */
    inline CreateEphemerisRequest& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a KMS key used to encrypt the ephemeris in Ground Station.</p>
     */
    inline CreateEphemerisRequest& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}


    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline CreateEphemerisRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline CreateEphemerisRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name string associated with the ephemeris. Used as a human-readable
     * identifier for the ephemeris.</p>
     */
    inline CreateEphemerisRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Customer-provided priority score to establish the order in which overlapping
     * ephemerides should be used.</p> <p>The default for customer-provided ephemeris
     * priority is 1, and higher numbers take precedence.</p> <p>Priority must be 1 or
     * greater</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>Customer-provided priority score to establish the order in which overlapping
     * ephemerides should be used.</p> <p>The default for customer-provided ephemeris
     * priority is 1, and higher numbers take precedence.</p> <p>Priority must be 1 or
     * greater</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>Customer-provided priority score to establish the order in which overlapping
     * ephemerides should be used.</p> <p>The default for customer-provided ephemeris
     * priority is 1, and higher numbers take precedence.</p> <p>Priority must be 1 or
     * greater</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>Customer-provided priority score to establish the order in which overlapping
     * ephemerides should be used.</p> <p>The default for customer-provided ephemeris
     * priority is 1, and higher numbers take precedence.</p> <p>Priority must be 1 or
     * greater</p>
     */
    inline CreateEphemerisRequest& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>AWS Ground Station satellite ID for this ephemeris.</p>
     */
    inline const Aws::String& GetSatelliteId() const{ return m_satelliteId; }

    /**
     * <p>AWS Ground Station satellite ID for this ephemeris.</p>
     */
    inline bool SatelliteIdHasBeenSet() const { return m_satelliteIdHasBeenSet; }

    /**
     * <p>AWS Ground Station satellite ID for this ephemeris.</p>
     */
    inline void SetSatelliteId(const Aws::String& value) { m_satelliteIdHasBeenSet = true; m_satelliteId = value; }

    /**
     * <p>AWS Ground Station satellite ID for this ephemeris.</p>
     */
    inline void SetSatelliteId(Aws::String&& value) { m_satelliteIdHasBeenSet = true; m_satelliteId = std::move(value); }

    /**
     * <p>AWS Ground Station satellite ID for this ephemeris.</p>
     */
    inline void SetSatelliteId(const char* value) { m_satelliteIdHasBeenSet = true; m_satelliteId.assign(value); }

    /**
     * <p>AWS Ground Station satellite ID for this ephemeris.</p>
     */
    inline CreateEphemerisRequest& WithSatelliteId(const Aws::String& value) { SetSatelliteId(value); return *this;}

    /**
     * <p>AWS Ground Station satellite ID for this ephemeris.</p>
     */
    inline CreateEphemerisRequest& WithSatelliteId(Aws::String&& value) { SetSatelliteId(std::move(value)); return *this;}

    /**
     * <p>AWS Ground Station satellite ID for this ephemeris.</p>
     */
    inline CreateEphemerisRequest& WithSatelliteId(const char* value) { SetSatelliteId(value); return *this;}


    /**
     * <p>Tags assigned to an ephemeris.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags assigned to an ephemeris.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags assigned to an ephemeris.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags assigned to an ephemeris.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags assigned to an ephemeris.</p>
     */
    inline CreateEphemerisRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags assigned to an ephemeris.</p>
     */
    inline CreateEphemerisRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags assigned to an ephemeris.</p>
     */
    inline CreateEphemerisRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags assigned to an ephemeris.</p>
     */
    inline CreateEphemerisRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to an ephemeris.</p>
     */
    inline CreateEphemerisRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to an ephemeris.</p>
     */
    inline CreateEphemerisRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags assigned to an ephemeris.</p>
     */
    inline CreateEphemerisRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to an ephemeris.</p>
     */
    inline CreateEphemerisRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to an ephemeris.</p>
     */
    inline CreateEphemerisRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    EphemerisData m_ephemeris;
    bool m_ephemerisHasBeenSet = false;

    Aws::Utils::DateTime m_expirationTime;
    bool m_expirationTimeHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::String m_satelliteId;
    bool m_satelliteIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
