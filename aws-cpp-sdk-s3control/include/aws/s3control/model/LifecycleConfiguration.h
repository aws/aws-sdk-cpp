/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/LifecycleRule.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>The container for the Outposts bucket lifecycle configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/LifecycleConfiguration">AWS
   * API Reference</a></p>
   */
  class LifecycleConfiguration
  {
  public:
    AWS_S3CONTROL_API LifecycleConfiguration();
    AWS_S3CONTROL_API LifecycleConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API LifecycleConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A lifecycle rule for individual objects in an Outposts bucket. </p>
     */
    inline const Aws::Vector<LifecycleRule>& GetRules() const{ return m_rules; }

    /**
     * <p>A lifecycle rule for individual objects in an Outposts bucket. </p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>A lifecycle rule for individual objects in an Outposts bucket. </p>
     */
    inline void SetRules(const Aws::Vector<LifecycleRule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>A lifecycle rule for individual objects in an Outposts bucket. </p>
     */
    inline void SetRules(Aws::Vector<LifecycleRule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>A lifecycle rule for individual objects in an Outposts bucket. </p>
     */
    inline LifecycleConfiguration& WithRules(const Aws::Vector<LifecycleRule>& value) { SetRules(value); return *this;}

    /**
     * <p>A lifecycle rule for individual objects in an Outposts bucket. </p>
     */
    inline LifecycleConfiguration& WithRules(Aws::Vector<LifecycleRule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>A lifecycle rule for individual objects in an Outposts bucket. </p>
     */
    inline LifecycleConfiguration& AddRules(const LifecycleRule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>A lifecycle rule for individual objects in an Outposts bucket. </p>
     */
    inline LifecycleConfiguration& AddRules(LifecycleRule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<LifecycleRule> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
