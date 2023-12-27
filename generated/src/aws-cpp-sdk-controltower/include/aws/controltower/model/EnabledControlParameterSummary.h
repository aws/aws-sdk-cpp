﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
namespace ControlTower
{
namespace Model
{

  /**
   * <p>Returns a summary of information about the parameters of an enabled
   * control.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/EnabledControlParameterSummary">AWS
   * API Reference</a></p>
   */
  class EnabledControlParameterSummary
  {
  public:
    AWS_CONTROLTOWER_API EnabledControlParameterSummary();
    AWS_CONTROLTOWER_API EnabledControlParameterSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API EnabledControlParameterSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key of a key/value pair.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key of a key/value pair.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key of a key/value pair.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key of a key/value pair.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key of a key/value pair.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key of a key/value pair.</p>
     */
    inline EnabledControlParameterSummary& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key of a key/value pair.</p>
     */
    inline EnabledControlParameterSummary& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key of a key/value pair.</p>
     */
    inline EnabledControlParameterSummary& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value of a key/value pair.</p>
     */
    inline Aws::Utils::DocumentView GetValue() const{ return m_value; }

    /**
     * <p>The value of a key/value pair.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of a key/value pair.</p>
     */
    inline void SetValue(const Aws::Utils::Document& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of a key/value pair.</p>
     */
    inline void SetValue(Aws::Utils::Document&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of a key/value pair.</p>
     */
    inline EnabledControlParameterSummary& WithValue(const Aws::Utils::Document& value) { SetValue(value); return *this;}

    /**
     * <p>The value of a key/value pair.</p>
     */
    inline EnabledControlParameterSummary& WithValue(Aws::Utils::Document&& value) { SetValue(std::move(value)); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Utils::Document m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
