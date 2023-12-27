/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
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
namespace CodeStarconnections
{
namespace Model
{

  /**
   * <p>The context for a specific sync blocker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/SyncBlockerContext">AWS
   * API Reference</a></p>
   */
  class SyncBlockerContext
  {
  public:
    AWS_CODESTARCONNECTIONS_API SyncBlockerContext();
    AWS_CODESTARCONNECTIONS_API SyncBlockerContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARCONNECTIONS_API SyncBlockerContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARCONNECTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key provided for a context key-value pair for a specific sync
     * blocker.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key provided for a context key-value pair for a specific sync
     * blocker.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key provided for a context key-value pair for a specific sync
     * blocker.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key provided for a context key-value pair for a specific sync
     * blocker.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key provided for a context key-value pair for a specific sync
     * blocker.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key provided for a context key-value pair for a specific sync
     * blocker.</p>
     */
    inline SyncBlockerContext& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key provided for a context key-value pair for a specific sync
     * blocker.</p>
     */
    inline SyncBlockerContext& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key provided for a context key-value pair for a specific sync
     * blocker.</p>
     */
    inline SyncBlockerContext& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value provided for a context key-value pair for a specific sync
     * blocker.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value provided for a context key-value pair for a specific sync
     * blocker.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value provided for a context key-value pair for a specific sync
     * blocker.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value provided for a context key-value pair for a specific sync
     * blocker.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value provided for a context key-value pair for a specific sync
     * blocker.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value provided for a context key-value pair for a specific sync
     * blocker.</p>
     */
    inline SyncBlockerContext& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value provided for a context key-value pair for a specific sync
     * blocker.</p>
     */
    inline SyncBlockerContext& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value provided for a context key-value pair for a specific sync
     * blocker.</p>
     */
    inline SyncBlockerContext& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
