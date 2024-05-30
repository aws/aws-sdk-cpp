/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>Contains information about a partition key for an event data
   * store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/PartitionKey">AWS
   * API Reference</a></p>
   */
  class PartitionKey
  {
  public:
    AWS_CLOUDTRAIL_API PartitionKey();
    AWS_CLOUDTRAIL_API PartitionKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API PartitionKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the partition key.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the partition key.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the partition key.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the partition key.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the partition key.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the partition key.</p>
     */
    inline PartitionKey& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the partition key.</p>
     */
    inline PartitionKey& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the partition key.</p>
     */
    inline PartitionKey& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The data type of the partition key. For example, <code>bigint</code> or
     * <code>string</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The data type of the partition key. For example, <code>bigint</code> or
     * <code>string</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The data type of the partition key. For example, <code>bigint</code> or
     * <code>string</code>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The data type of the partition key. For example, <code>bigint</code> or
     * <code>string</code>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The data type of the partition key. For example, <code>bigint</code> or
     * <code>string</code>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The data type of the partition key. For example, <code>bigint</code> or
     * <code>string</code>.</p>
     */
    inline PartitionKey& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The data type of the partition key. For example, <code>bigint</code> or
     * <code>string</code>.</p>
     */
    inline PartitionKey& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The data type of the partition key. For example, <code>bigint</code> or
     * <code>string</code>.</p>
     */
    inline PartitionKey& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
