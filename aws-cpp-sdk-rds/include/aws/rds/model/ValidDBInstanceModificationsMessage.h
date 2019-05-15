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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ValidStorageOptions.h>
#include <aws/rds/model/AvailableProcessorFeature.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>Information about valid modifications that you can make to your DB instance.
   * Contains the result of a successful call to the
   * <code>DescribeValidDBInstanceModifications</code> action. You can use this
   * information when you call <code>ModifyDBInstance</code>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ValidDBInstanceModificationsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API ValidDBInstanceModificationsMessage
  {
  public:
    ValidDBInstanceModificationsMessage();
    ValidDBInstanceModificationsMessage(const Aws::Utils::Xml::XmlNode& xmlNode);
    ValidDBInstanceModificationsMessage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Valid storage options for your DB instance. </p>
     */
    inline const Aws::Vector<ValidStorageOptions>& GetStorage() const{ return m_storage; }

    /**
     * <p>Valid storage options for your DB instance. </p>
     */
    inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }

    /**
     * <p>Valid storage options for your DB instance. </p>
     */
    inline void SetStorage(const Aws::Vector<ValidStorageOptions>& value) { m_storageHasBeenSet = true; m_storage = value; }

    /**
     * <p>Valid storage options for your DB instance. </p>
     */
    inline void SetStorage(Aws::Vector<ValidStorageOptions>&& value) { m_storageHasBeenSet = true; m_storage = std::move(value); }

    /**
     * <p>Valid storage options for your DB instance. </p>
     */
    inline ValidDBInstanceModificationsMessage& WithStorage(const Aws::Vector<ValidStorageOptions>& value) { SetStorage(value); return *this;}

    /**
     * <p>Valid storage options for your DB instance. </p>
     */
    inline ValidDBInstanceModificationsMessage& WithStorage(Aws::Vector<ValidStorageOptions>&& value) { SetStorage(std::move(value)); return *this;}

    /**
     * <p>Valid storage options for your DB instance. </p>
     */
    inline ValidDBInstanceModificationsMessage& AddStorage(const ValidStorageOptions& value) { m_storageHasBeenSet = true; m_storage.push_back(value); return *this; }

    /**
     * <p>Valid storage options for your DB instance. </p>
     */
    inline ValidDBInstanceModificationsMessage& AddStorage(ValidStorageOptions&& value) { m_storageHasBeenSet = true; m_storage.push_back(std::move(value)); return *this; }


    /**
     * <p>Valid processor features for your DB instance. </p>
     */
    inline const Aws::Vector<AvailableProcessorFeature>& GetValidProcessorFeatures() const{ return m_validProcessorFeatures; }

    /**
     * <p>Valid processor features for your DB instance. </p>
     */
    inline bool ValidProcessorFeaturesHasBeenSet() const { return m_validProcessorFeaturesHasBeenSet; }

    /**
     * <p>Valid processor features for your DB instance. </p>
     */
    inline void SetValidProcessorFeatures(const Aws::Vector<AvailableProcessorFeature>& value) { m_validProcessorFeaturesHasBeenSet = true; m_validProcessorFeatures = value; }

    /**
     * <p>Valid processor features for your DB instance. </p>
     */
    inline void SetValidProcessorFeatures(Aws::Vector<AvailableProcessorFeature>&& value) { m_validProcessorFeaturesHasBeenSet = true; m_validProcessorFeatures = std::move(value); }

    /**
     * <p>Valid processor features for your DB instance. </p>
     */
    inline ValidDBInstanceModificationsMessage& WithValidProcessorFeatures(const Aws::Vector<AvailableProcessorFeature>& value) { SetValidProcessorFeatures(value); return *this;}

    /**
     * <p>Valid processor features for your DB instance. </p>
     */
    inline ValidDBInstanceModificationsMessage& WithValidProcessorFeatures(Aws::Vector<AvailableProcessorFeature>&& value) { SetValidProcessorFeatures(std::move(value)); return *this;}

    /**
     * <p>Valid processor features for your DB instance. </p>
     */
    inline ValidDBInstanceModificationsMessage& AddValidProcessorFeatures(const AvailableProcessorFeature& value) { m_validProcessorFeaturesHasBeenSet = true; m_validProcessorFeatures.push_back(value); return *this; }

    /**
     * <p>Valid processor features for your DB instance. </p>
     */
    inline ValidDBInstanceModificationsMessage& AddValidProcessorFeatures(AvailableProcessorFeature&& value) { m_validProcessorFeaturesHasBeenSet = true; m_validProcessorFeatures.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ValidStorageOptions> m_storage;
    bool m_storageHasBeenSet;

    Aws::Vector<AvailableProcessorFeature> m_validProcessorFeatures;
    bool m_validProcessorFeaturesHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
