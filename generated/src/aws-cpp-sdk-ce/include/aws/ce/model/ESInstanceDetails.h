/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Details about the Amazon OpenSearch Service instances that Amazon Web
   * Services recommends that you purchase.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ESInstanceDetails">AWS
   * API Reference</a></p>
   */
  class ESInstanceDetails
  {
  public:
    AWS_COSTEXPLORER_API ESInstanceDetails();
    AWS_COSTEXPLORER_API ESInstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API ESInstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The class of instance that Amazon Web Services recommends.</p>
     */
    inline const Aws::String& GetInstanceClass() const{ return m_instanceClass; }

    /**
     * <p>The class of instance that Amazon Web Services recommends.</p>
     */
    inline bool InstanceClassHasBeenSet() const { return m_instanceClassHasBeenSet; }

    /**
     * <p>The class of instance that Amazon Web Services recommends.</p>
     */
    inline void SetInstanceClass(const Aws::String& value) { m_instanceClassHasBeenSet = true; m_instanceClass = value; }

    /**
     * <p>The class of instance that Amazon Web Services recommends.</p>
     */
    inline void SetInstanceClass(Aws::String&& value) { m_instanceClassHasBeenSet = true; m_instanceClass = std::move(value); }

    /**
     * <p>The class of instance that Amazon Web Services recommends.</p>
     */
    inline void SetInstanceClass(const char* value) { m_instanceClassHasBeenSet = true; m_instanceClass.assign(value); }

    /**
     * <p>The class of instance that Amazon Web Services recommends.</p>
     */
    inline ESInstanceDetails& WithInstanceClass(const Aws::String& value) { SetInstanceClass(value); return *this;}

    /**
     * <p>The class of instance that Amazon Web Services recommends.</p>
     */
    inline ESInstanceDetails& WithInstanceClass(Aws::String&& value) { SetInstanceClass(std::move(value)); return *this;}

    /**
     * <p>The class of instance that Amazon Web Services recommends.</p>
     */
    inline ESInstanceDetails& WithInstanceClass(const char* value) { SetInstanceClass(value); return *this;}


    /**
     * <p>The size of instance that Amazon Web Services recommends.</p>
     */
    inline const Aws::String& GetInstanceSize() const{ return m_instanceSize; }

    /**
     * <p>The size of instance that Amazon Web Services recommends.</p>
     */
    inline bool InstanceSizeHasBeenSet() const { return m_instanceSizeHasBeenSet; }

    /**
     * <p>The size of instance that Amazon Web Services recommends.</p>
     */
    inline void SetInstanceSize(const Aws::String& value) { m_instanceSizeHasBeenSet = true; m_instanceSize = value; }

    /**
     * <p>The size of instance that Amazon Web Services recommends.</p>
     */
    inline void SetInstanceSize(Aws::String&& value) { m_instanceSizeHasBeenSet = true; m_instanceSize = std::move(value); }

    /**
     * <p>The size of instance that Amazon Web Services recommends.</p>
     */
    inline void SetInstanceSize(const char* value) { m_instanceSizeHasBeenSet = true; m_instanceSize.assign(value); }

    /**
     * <p>The size of instance that Amazon Web Services recommends.</p>
     */
    inline ESInstanceDetails& WithInstanceSize(const Aws::String& value) { SetInstanceSize(value); return *this;}

    /**
     * <p>The size of instance that Amazon Web Services recommends.</p>
     */
    inline ESInstanceDetails& WithInstanceSize(Aws::String&& value) { SetInstanceSize(std::move(value)); return *this;}

    /**
     * <p>The size of instance that Amazon Web Services recommends.</p>
     */
    inline ESInstanceDetails& WithInstanceSize(const char* value) { SetInstanceSize(value); return *this;}


    /**
     * <p>The Amazon Web Services Region of the recommended reservation.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Amazon Web Services Region of the recommended reservation.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region of the recommended reservation.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Amazon Web Services Region of the recommended reservation.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Amazon Web Services Region of the recommended reservation.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Amazon Web Services Region of the recommended reservation.</p>
     */
    inline ESInstanceDetails& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region of the recommended reservation.</p>
     */
    inline ESInstanceDetails& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region of the recommended reservation.</p>
     */
    inline ESInstanceDetails& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>Determines whether the recommendation is for a current-generation
     * instance.</p>
     */
    inline bool GetCurrentGeneration() const{ return m_currentGeneration; }

    /**
     * <p>Determines whether the recommendation is for a current-generation
     * instance.</p>
     */
    inline bool CurrentGenerationHasBeenSet() const { return m_currentGenerationHasBeenSet; }

    /**
     * <p>Determines whether the recommendation is for a current-generation
     * instance.</p>
     */
    inline void SetCurrentGeneration(bool value) { m_currentGenerationHasBeenSet = true; m_currentGeneration = value; }

    /**
     * <p>Determines whether the recommendation is for a current-generation
     * instance.</p>
     */
    inline ESInstanceDetails& WithCurrentGeneration(bool value) { SetCurrentGeneration(value); return *this;}


    /**
     * <p>Determines whether the recommended reservation is size flexible.</p>
     */
    inline bool GetSizeFlexEligible() const{ return m_sizeFlexEligible; }

    /**
     * <p>Determines whether the recommended reservation is size flexible.</p>
     */
    inline bool SizeFlexEligibleHasBeenSet() const { return m_sizeFlexEligibleHasBeenSet; }

    /**
     * <p>Determines whether the recommended reservation is size flexible.</p>
     */
    inline void SetSizeFlexEligible(bool value) { m_sizeFlexEligibleHasBeenSet = true; m_sizeFlexEligible = value; }

    /**
     * <p>Determines whether the recommended reservation is size flexible.</p>
     */
    inline ESInstanceDetails& WithSizeFlexEligible(bool value) { SetSizeFlexEligible(value); return *this;}

  private:

    Aws::String m_instanceClass;
    bool m_instanceClassHasBeenSet = false;

    Aws::String m_instanceSize;
    bool m_instanceSizeHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    bool m_currentGeneration;
    bool m_currentGenerationHasBeenSet = false;

    bool m_sizeFlexEligible;
    bool m_sizeFlexEligibleHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
