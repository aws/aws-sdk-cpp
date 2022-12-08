/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/EcrScanFrequency.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Information on the Amazon ECR repository metadata associated with a
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/EcrRepositoryMetadata">AWS
   * API Reference</a></p>
   */
  class EcrRepositoryMetadata
  {
  public:
    AWS_INSPECTOR2_API EcrRepositoryMetadata();
    AWS_INSPECTOR2_API EcrRepositoryMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API EcrRepositoryMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon ECR repository.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Amazon ECR repository.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Amazon ECR repository.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Amazon ECR repository.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Amazon ECR repository.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Amazon ECR repository.</p>
     */
    inline EcrRepositoryMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Amazon ECR repository.</p>
     */
    inline EcrRepositoryMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon ECR repository.</p>
     */
    inline EcrRepositoryMetadata& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The frequency of scans.</p>
     */
    inline const EcrScanFrequency& GetScanFrequency() const{ return m_scanFrequency; }

    /**
     * <p>The frequency of scans.</p>
     */
    inline bool ScanFrequencyHasBeenSet() const { return m_scanFrequencyHasBeenSet; }

    /**
     * <p>The frequency of scans.</p>
     */
    inline void SetScanFrequency(const EcrScanFrequency& value) { m_scanFrequencyHasBeenSet = true; m_scanFrequency = value; }

    /**
     * <p>The frequency of scans.</p>
     */
    inline void SetScanFrequency(EcrScanFrequency&& value) { m_scanFrequencyHasBeenSet = true; m_scanFrequency = std::move(value); }

    /**
     * <p>The frequency of scans.</p>
     */
    inline EcrRepositoryMetadata& WithScanFrequency(const EcrScanFrequency& value) { SetScanFrequency(value); return *this;}

    /**
     * <p>The frequency of scans.</p>
     */
    inline EcrRepositoryMetadata& WithScanFrequency(EcrScanFrequency&& value) { SetScanFrequency(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EcrScanFrequency m_scanFrequency;
    bool m_scanFrequencyHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
