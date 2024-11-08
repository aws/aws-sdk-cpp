/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/firehose/model/PartitionField.h>
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
   * <p> </p> <p>Amazon Data Firehose is in preview release and is subject to
   * change.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/PartitionSpec">AWS
   * API Reference</a></p>
   */
  class PartitionSpec
  {
  public:
    AWS_FIREHOSE_API PartitionSpec();
    AWS_FIREHOSE_API PartitionSpec(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API PartitionSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline const Aws::Vector<PartitionField>& GetIdentity() const{ return m_identity; }
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }
    inline void SetIdentity(const Aws::Vector<PartitionField>& value) { m_identityHasBeenSet = true; m_identity = value; }
    inline void SetIdentity(Aws::Vector<PartitionField>&& value) { m_identityHasBeenSet = true; m_identity = std::move(value); }
    inline PartitionSpec& WithIdentity(const Aws::Vector<PartitionField>& value) { SetIdentity(value); return *this;}
    inline PartitionSpec& WithIdentity(Aws::Vector<PartitionField>&& value) { SetIdentity(std::move(value)); return *this;}
    inline PartitionSpec& AddIdentity(const PartitionField& value) { m_identityHasBeenSet = true; m_identity.push_back(value); return *this; }
    inline PartitionSpec& AddIdentity(PartitionField&& value) { m_identityHasBeenSet = true; m_identity.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<PartitionField> m_identity;
    bool m_identityHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
