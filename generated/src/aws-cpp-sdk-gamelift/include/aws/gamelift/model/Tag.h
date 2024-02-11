/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>A label that you can assign to a Amazon GameLift resource. </p> <p> <b>Learn
   * more</b> </p> <p> <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
   * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
   * Reference</i> </p> <p> <a
   * href="http://aws.amazon.com/answers/account-management/aws-tagging-strategies/">
   * Amazon Web Services Tagging Strategies</a> </p> <p> <b>Related actions</b> </p>
   * <p> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
   * APIs by task</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_GAMELIFT_API Tag();
    AWS_GAMELIFT_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key for a developer-defined key value pair for tagging an Amazon Web
     * Services resource. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key for a developer-defined key value pair for tagging an Amazon Web
     * Services resource. </p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key for a developer-defined key value pair for tagging an Amazon Web
     * Services resource. </p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key for a developer-defined key value pair for tagging an Amazon Web
     * Services resource. </p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key for a developer-defined key value pair for tagging an Amazon Web
     * Services resource. </p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key for a developer-defined key value pair for tagging an Amazon Web
     * Services resource. </p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key for a developer-defined key value pair for tagging an Amazon Web
     * Services resource. </p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key for a developer-defined key value pair for tagging an Amazon Web
     * Services resource. </p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value for a developer-defined key value pair for tagging an Amazon Web
     * Services resource. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value for a developer-defined key value pair for tagging an Amazon Web
     * Services resource. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value for a developer-defined key value pair for tagging an Amazon Web
     * Services resource. </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value for a developer-defined key value pair for tagging an Amazon Web
     * Services resource. </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value for a developer-defined key value pair for tagging an Amazon Web
     * Services resource. </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value for a developer-defined key value pair for tagging an Amazon Web
     * Services resource. </p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value for a developer-defined key value pair for tagging an Amazon Web
     * Services resource. </p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value for a developer-defined key value pair for tagging an Amazon Web
     * Services resource. </p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
