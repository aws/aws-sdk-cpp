/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>Contains compatibility information for an Amazon EKS add-on.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/AddonCompatibilityDetail">AWS
   * API Reference</a></p>
   */
  class AddonCompatibilityDetail
  {
  public:
    AWS_EKS_API AddonCompatibilityDetail();
    AWS_EKS_API AddonCompatibilityDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API AddonCompatibilityDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon EKS add-on.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AddonCompatibilityDetail& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AddonCompatibilityDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AddonCompatibilityDetail& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of compatible add-on versions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCompatibleVersions() const{ return m_compatibleVersions; }
    inline bool CompatibleVersionsHasBeenSet() const { return m_compatibleVersionsHasBeenSet; }
    inline void SetCompatibleVersions(const Aws::Vector<Aws::String>& value) { m_compatibleVersionsHasBeenSet = true; m_compatibleVersions = value; }
    inline void SetCompatibleVersions(Aws::Vector<Aws::String>&& value) { m_compatibleVersionsHasBeenSet = true; m_compatibleVersions = std::move(value); }
    inline AddonCompatibilityDetail& WithCompatibleVersions(const Aws::Vector<Aws::String>& value) { SetCompatibleVersions(value); return *this;}
    inline AddonCompatibilityDetail& WithCompatibleVersions(Aws::Vector<Aws::String>&& value) { SetCompatibleVersions(std::move(value)); return *this;}
    inline AddonCompatibilityDetail& AddCompatibleVersions(const Aws::String& value) { m_compatibleVersionsHasBeenSet = true; m_compatibleVersions.push_back(value); return *this; }
    inline AddonCompatibilityDetail& AddCompatibleVersions(Aws::String&& value) { m_compatibleVersionsHasBeenSet = true; m_compatibleVersions.push_back(std::move(value)); return *this; }
    inline AddonCompatibilityDetail& AddCompatibleVersions(const char* value) { m_compatibleVersionsHasBeenSet = true; m_compatibleVersions.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_compatibleVersions;
    bool m_compatibleVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
