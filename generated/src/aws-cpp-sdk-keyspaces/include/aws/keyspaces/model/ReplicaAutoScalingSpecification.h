/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/keyspaces/model/AutoScalingSpecification.h>
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
   * <p>The auto scaling settings of a multi-Region table in the specified Amazon Web
   * Services Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/ReplicaAutoScalingSpecification">AWS
   * API Reference</a></p>
   */
  class ReplicaAutoScalingSpecification
  {
  public:
    AWS_KEYSPACES_API ReplicaAutoScalingSpecification();
    AWS_KEYSPACES_API ReplicaAutoScalingSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API ReplicaAutoScalingSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline ReplicaAutoScalingSpecification& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline ReplicaAutoScalingSpecification& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline ReplicaAutoScalingSpecification& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The auto scaling settings for a multi-Region table in the specified Amazon
     * Web Services Region.</p>
     */
    inline const AutoScalingSpecification& GetAutoScalingSpecification() const{ return m_autoScalingSpecification; }

    /**
     * <p>The auto scaling settings for a multi-Region table in the specified Amazon
     * Web Services Region.</p>
     */
    inline bool AutoScalingSpecificationHasBeenSet() const { return m_autoScalingSpecificationHasBeenSet; }

    /**
     * <p>The auto scaling settings for a multi-Region table in the specified Amazon
     * Web Services Region.</p>
     */
    inline void SetAutoScalingSpecification(const AutoScalingSpecification& value) { m_autoScalingSpecificationHasBeenSet = true; m_autoScalingSpecification = value; }

    /**
     * <p>The auto scaling settings for a multi-Region table in the specified Amazon
     * Web Services Region.</p>
     */
    inline void SetAutoScalingSpecification(AutoScalingSpecification&& value) { m_autoScalingSpecificationHasBeenSet = true; m_autoScalingSpecification = std::move(value); }

    /**
     * <p>The auto scaling settings for a multi-Region table in the specified Amazon
     * Web Services Region.</p>
     */
    inline ReplicaAutoScalingSpecification& WithAutoScalingSpecification(const AutoScalingSpecification& value) { SetAutoScalingSpecification(value); return *this;}

    /**
     * <p>The auto scaling settings for a multi-Region table in the specified Amazon
     * Web Services Region.</p>
     */
    inline ReplicaAutoScalingSpecification& WithAutoScalingSpecification(AutoScalingSpecification&& value) { SetAutoScalingSpecification(std::move(value)); return *this;}

  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    AutoScalingSpecification m_autoScalingSpecification;
    bool m_autoScalingSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
