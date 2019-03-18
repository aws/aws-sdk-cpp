/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Details about the Amazon ES instances that AWS recommends that you
   * purchase.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ESInstanceDetails">AWS
   * API Reference</a></p>
   */
  class AWS_COSTEXPLORER_API ESInstanceDetails
  {
  public:
    ESInstanceDetails();
    ESInstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    ESInstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The class of instance that AWS recommends.</p>
     */
    inline const Aws::String& GetInstanceClass() const{ return m_instanceClass; }

    /**
     * <p>The class of instance that AWS recommends.</p>
     */
    inline bool InstanceClassHasBeenSet() const { return m_instanceClassHasBeenSet; }

    /**
     * <p>The class of instance that AWS recommends.</p>
     */
    inline void SetInstanceClass(const Aws::String& value) { m_instanceClassHasBeenSet = true; m_instanceClass = value; }

    /**
     * <p>The class of instance that AWS recommends.</p>
     */
    inline void SetInstanceClass(Aws::String&& value) { m_instanceClassHasBeenSet = true; m_instanceClass = std::move(value); }

    /**
     * <p>The class of instance that AWS recommends.</p>
     */
    inline void SetInstanceClass(const char* value) { m_instanceClassHasBeenSet = true; m_instanceClass.assign(value); }

    /**
     * <p>The class of instance that AWS recommends.</p>
     */
    inline ESInstanceDetails& WithInstanceClass(const Aws::String& value) { SetInstanceClass(value); return *this;}

    /**
     * <p>The class of instance that AWS recommends.</p>
     */
    inline ESInstanceDetails& WithInstanceClass(Aws::String&& value) { SetInstanceClass(std::move(value)); return *this;}

    /**
     * <p>The class of instance that AWS recommends.</p>
     */
    inline ESInstanceDetails& WithInstanceClass(const char* value) { SetInstanceClass(value); return *this;}


    /**
     * <p>The size of instance that AWS recommends.</p>
     */
    inline const Aws::String& GetInstanceSize() const{ return m_instanceSize; }

    /**
     * <p>The size of instance that AWS recommends.</p>
     */
    inline bool InstanceSizeHasBeenSet() const { return m_instanceSizeHasBeenSet; }

    /**
     * <p>The size of instance that AWS recommends.</p>
     */
    inline void SetInstanceSize(const Aws::String& value) { m_instanceSizeHasBeenSet = true; m_instanceSize = value; }

    /**
     * <p>The size of instance that AWS recommends.</p>
     */
    inline void SetInstanceSize(Aws::String&& value) { m_instanceSizeHasBeenSet = true; m_instanceSize = std::move(value); }

    /**
     * <p>The size of instance that AWS recommends.</p>
     */
    inline void SetInstanceSize(const char* value) { m_instanceSizeHasBeenSet = true; m_instanceSize.assign(value); }

    /**
     * <p>The size of instance that AWS recommends.</p>
     */
    inline ESInstanceDetails& WithInstanceSize(const Aws::String& value) { SetInstanceSize(value); return *this;}

    /**
     * <p>The size of instance that AWS recommends.</p>
     */
    inline ESInstanceDetails& WithInstanceSize(Aws::String&& value) { SetInstanceSize(std::move(value)); return *this;}

    /**
     * <p>The size of instance that AWS recommends.</p>
     */
    inline ESInstanceDetails& WithInstanceSize(const char* value) { SetInstanceSize(value); return *this;}


    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline ESInstanceDetails& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline ESInstanceDetails& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline ESInstanceDetails& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>Whether the recommendation is for a current-generation instance.</p>
     */
    inline bool GetCurrentGeneration() const{ return m_currentGeneration; }

    /**
     * <p>Whether the recommendation is for a current-generation instance.</p>
     */
    inline bool CurrentGenerationHasBeenSet() const { return m_currentGenerationHasBeenSet; }

    /**
     * <p>Whether the recommendation is for a current-generation instance.</p>
     */
    inline void SetCurrentGeneration(bool value) { m_currentGenerationHasBeenSet = true; m_currentGeneration = value; }

    /**
     * <p>Whether the recommendation is for a current-generation instance.</p>
     */
    inline ESInstanceDetails& WithCurrentGeneration(bool value) { SetCurrentGeneration(value); return *this;}


    /**
     * <p>Whether the recommended reservation is size flexible.</p>
     */
    inline bool GetSizeFlexEligible() const{ return m_sizeFlexEligible; }

    /**
     * <p>Whether the recommended reservation is size flexible.</p>
     */
    inline bool SizeFlexEligibleHasBeenSet() const { return m_sizeFlexEligibleHasBeenSet; }

    /**
     * <p>Whether the recommended reservation is size flexible.</p>
     */
    inline void SetSizeFlexEligible(bool value) { m_sizeFlexEligibleHasBeenSet = true; m_sizeFlexEligible = value; }

    /**
     * <p>Whether the recommended reservation is size flexible.</p>
     */
    inline ESInstanceDetails& WithSizeFlexEligible(bool value) { SetSizeFlexEligible(value); return *this;}

  private:

    Aws::String m_instanceClass;
    bool m_instanceClassHasBeenSet;

    Aws::String m_instanceSize;
    bool m_instanceSizeHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    bool m_currentGeneration;
    bool m_currentGenerationHasBeenSet;

    bool m_sizeFlexEligible;
    bool m_sizeFlexEligibleHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
