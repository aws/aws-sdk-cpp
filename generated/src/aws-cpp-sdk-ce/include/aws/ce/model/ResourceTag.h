/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The tag structure that contains a tag key and value. </p>  <p>Tagging
   * is supported only for the following Cost Explorer resource types: <a
   * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AnomalyMonitor.html">
   * <code>AnomalyMonitor</code> </a>, <a
   * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AnomalySubscription.html">
   * <code>AnomalySubscription</code> </a>, <a
   * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_CostCategory.html">
   * <code>CostCategory</code> </a>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ResourceTag">AWS API
   * Reference</a></p>
   */
  class ResourceTag
  {
  public:
    AWS_COSTEXPLORER_API ResourceTag();
    AWS_COSTEXPLORER_API ResourceTag(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API ResourceTag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key that's associated with the tag. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key that's associated with the tag. </p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key that's associated with the tag. </p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key that's associated with the tag. </p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key that's associated with the tag. </p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key that's associated with the tag. </p>
     */
    inline ResourceTag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key that's associated with the tag. </p>
     */
    inline ResourceTag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key that's associated with the tag. </p>
     */
    inline ResourceTag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value that's associated with the tag. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value that's associated with the tag. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value that's associated with the tag. </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value that's associated with the tag. </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value that's associated with the tag. </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value that's associated with the tag. </p>
     */
    inline ResourceTag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value that's associated with the tag. </p>
     */
    inline ResourceTag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value that's associated with the tag. </p>
     */
    inline ResourceTag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
