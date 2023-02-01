/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
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
namespace Keyspaces
{
namespace Model
{

  /**
   * <p>The partition key portion of the primary key is required and determines how
   * Amazon Keyspaces stores the data. The partition key can be a single column, or
   * it can be a compound value composed of two or more columns.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/PartitionKey">AWS
   * API Reference</a></p>
   */
  class PartitionKey
  {
  public:
    AWS_KEYSPACES_API PartitionKey();
    AWS_KEYSPACES_API PartitionKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API PartitionKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name(s) of the partition key column(s).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name(s) of the partition key column(s).</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name(s) of the partition key column(s).</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name(s) of the partition key column(s).</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name(s) of the partition key column(s).</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name(s) of the partition key column(s).</p>
     */
    inline PartitionKey& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name(s) of the partition key column(s).</p>
     */
    inline PartitionKey& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name(s) of the partition key column(s).</p>
     */
    inline PartitionKey& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
