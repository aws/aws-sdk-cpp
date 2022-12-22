/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Defines the Amazon Web Services Region and KMS key to add to the replication
   * set. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/AddRegionAction">AWS
   * API Reference</a></p>
   */
  class AddRegionAction
  {
  public:
    AWS_SSMINCIDENTS_API AddRegionAction();
    AWS_SSMINCIDENTS_API AddRegionAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API AddRegionAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services Region name to add to the replication set.</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }

    /**
     * <p>The Amazon Web Services Region name to add to the replication set.</p>
     */
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region name to add to the replication set.</p>
     */
    inline void SetRegionName(const Aws::String& value) { m_regionNameHasBeenSet = true; m_regionName = value; }

    /**
     * <p>The Amazon Web Services Region name to add to the replication set.</p>
     */
    inline void SetRegionName(Aws::String&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }

    /**
     * <p>The Amazon Web Services Region name to add to the replication set.</p>
     */
    inline void SetRegionName(const char* value) { m_regionNameHasBeenSet = true; m_regionName.assign(value); }

    /**
     * <p>The Amazon Web Services Region name to add to the replication set.</p>
     */
    inline AddRegionAction& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}

    /**
     * <p>The Amazon Web Services Region name to add to the replication set.</p>
     */
    inline AddRegionAction& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region name to add to the replication set.</p>
     */
    inline AddRegionAction& WithRegionName(const char* value) { SetRegionName(value); return *this;}


    /**
     * <p>The KMS key ID to use to encrypt your replication set.</p>
     */
    inline const Aws::String& GetSseKmsKeyId() const{ return m_sseKmsKeyId; }

    /**
     * <p>The KMS key ID to use to encrypt your replication set.</p>
     */
    inline bool SseKmsKeyIdHasBeenSet() const { return m_sseKmsKeyIdHasBeenSet; }

    /**
     * <p>The KMS key ID to use to encrypt your replication set.</p>
     */
    inline void SetSseKmsKeyId(const Aws::String& value) { m_sseKmsKeyIdHasBeenSet = true; m_sseKmsKeyId = value; }

    /**
     * <p>The KMS key ID to use to encrypt your replication set.</p>
     */
    inline void SetSseKmsKeyId(Aws::String&& value) { m_sseKmsKeyIdHasBeenSet = true; m_sseKmsKeyId = std::move(value); }

    /**
     * <p>The KMS key ID to use to encrypt your replication set.</p>
     */
    inline void SetSseKmsKeyId(const char* value) { m_sseKmsKeyIdHasBeenSet = true; m_sseKmsKeyId.assign(value); }

    /**
     * <p>The KMS key ID to use to encrypt your replication set.</p>
     */
    inline AddRegionAction& WithSseKmsKeyId(const Aws::String& value) { SetSseKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key ID to use to encrypt your replication set.</p>
     */
    inline AddRegionAction& WithSseKmsKeyId(Aws::String&& value) { SetSseKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key ID to use to encrypt your replication set.</p>
     */
    inline AddRegionAction& WithSseKmsKeyId(const char* value) { SetSseKmsKeyId(value); return *this;}

  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    Aws::String m_sseKmsKeyId;
    bool m_sseKmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
