/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>Additional query string parameter for the connection. You can include up to
   * 100 additional query string parameters per request. Each additional parameter
   * counts towards the event payload size, which cannot exceed 64 KB.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ConnectionQueryStringParameter">AWS
   * API Reference</a></p>
   */
  class ConnectionQueryStringParameter
  {
  public:
    AWS_CLOUDWATCHEVENTS_API ConnectionQueryStringParameter();
    AWS_CLOUDWATCHEVENTS_API ConnectionQueryStringParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API ConnectionQueryStringParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key for a query string parameter.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key for a query string parameter.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key for a query string parameter.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key for a query string parameter.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key for a query string parameter.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key for a query string parameter.</p>
     */
    inline ConnectionQueryStringParameter& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key for a query string parameter.</p>
     */
    inline ConnectionQueryStringParameter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key for a query string parameter.</p>
     */
    inline ConnectionQueryStringParameter& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value associated with the key for the query string parameter.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value associated with the key for the query string parameter.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value associated with the key for the query string parameter.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value associated with the key for the query string parameter.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value associated with the key for the query string parameter.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value associated with the key for the query string parameter.</p>
     */
    inline ConnectionQueryStringParameter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value associated with the key for the query string parameter.</p>
     */
    inline ConnectionQueryStringParameter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value associated with the key for the query string parameter.</p>
     */
    inline ConnectionQueryStringParameter& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>Specifies whether the value is secret.</p>
     */
    inline bool GetIsValueSecret() const{ return m_isValueSecret; }

    /**
     * <p>Specifies whether the value is secret.</p>
     */
    inline bool IsValueSecretHasBeenSet() const { return m_isValueSecretHasBeenSet; }

    /**
     * <p>Specifies whether the value is secret.</p>
     */
    inline void SetIsValueSecret(bool value) { m_isValueSecretHasBeenSet = true; m_isValueSecret = value; }

    /**
     * <p>Specifies whether the value is secret.</p>
     */
    inline ConnectionQueryStringParameter& WithIsValueSecret(bool value) { SetIsValueSecret(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    bool m_isValueSecret;
    bool m_isValueSecretHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
