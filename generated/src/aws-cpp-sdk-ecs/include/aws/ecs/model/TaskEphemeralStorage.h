/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The amount of ephemeral storage to allocate for the task.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/TaskEphemeralStorage">AWS
   * API Reference</a></p>
   */
  class TaskEphemeralStorage
  {
  public:
    AWS_ECS_API TaskEphemeralStorage() = default;
    AWS_ECS_API TaskEphemeralStorage(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API TaskEphemeralStorage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total amount, in GiB, of the ephemeral storage to set for the task. The
     * minimum supported value is <code>20</code> GiB and the maximum supported value
     * is&#x2028; <code>200</code> GiB.</p>
     */
    inline int GetSizeInGiB() const { return m_sizeInGiB; }
    inline bool SizeInGiBHasBeenSet() const { return m_sizeInGiBHasBeenSet; }
    inline void SetSizeInGiB(int value) { m_sizeInGiBHasBeenSet = true; m_sizeInGiB = value; }
    inline TaskEphemeralStorage& WithSizeInGiB(int value) { SetSizeInGiB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify an Key Management Service key ID to encrypt the ephemeral storage for
     * the task.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    TaskEphemeralStorage& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}
  private:

    int m_sizeInGiB{0};
    bool m_sizeInGiBHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
