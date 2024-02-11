/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
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
namespace ControlTower
{
namespace Model
{

  /**
   * <p>Returns a summary of information about a landing zone.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/LandingZoneSummary">AWS
   * API Reference</a></p>
   */
  class LandingZoneSummary
  {
  public:
    AWS_CONTROLTOWER_API LandingZoneSummary();
    AWS_CONTROLTOWER_API LandingZoneSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API LandingZoneSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the landing zone.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the landing zone.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the landing zone.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the landing zone.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the landing zone.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the landing zone.</p>
     */
    inline LandingZoneSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the landing zone.</p>
     */
    inline LandingZoneSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the landing zone.</p>
     */
    inline LandingZoneSummary& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
