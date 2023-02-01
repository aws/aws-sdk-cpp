/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Information about a problem detail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ProblemDetail">AWS
   * API Reference</a></p>
   */
  class ProblemDetail
  {
  public:
    AWS_DEVICEFARM_API ProblemDetail();
    AWS_DEVICEFARM_API ProblemDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API ProblemDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The problem detail's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The problem detail's ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The problem detail's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The problem detail's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The problem detail's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The problem detail's ARN.</p>
     */
    inline ProblemDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The problem detail's ARN.</p>
     */
    inline ProblemDetail& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The problem detail's ARN.</p>
     */
    inline ProblemDetail& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The problem detail's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The problem detail's name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The problem detail's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The problem detail's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The problem detail's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The problem detail's name.</p>
     */
    inline ProblemDetail& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The problem detail's name.</p>
     */
    inline ProblemDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The problem detail's name.</p>
     */
    inline ProblemDetail& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
