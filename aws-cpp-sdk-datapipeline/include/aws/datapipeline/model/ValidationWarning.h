/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
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
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Defines a validation warning. Validation warnings do not prevent pipeline
   * activation. The set of validation warnings that can be returned are defined by
   * AWS Data Pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ValidationWarning">AWS
   * API Reference</a></p>
   */
  class ValidationWarning
  {
  public:
    AWS_DATAPIPELINE_API ValidationWarning();
    AWS_DATAPIPELINE_API ValidationWarning(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API ValidationWarning& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the object that contains the validation warning.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the object that contains the validation warning.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the object that contains the validation warning.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the object that contains the validation warning.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the object that contains the validation warning.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the object that contains the validation warning.</p>
     */
    inline ValidationWarning& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the object that contains the validation warning.</p>
     */
    inline ValidationWarning& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the object that contains the validation warning.</p>
     */
    inline ValidationWarning& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A description of the validation warning.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWarnings() const{ return m_warnings; }

    /**
     * <p>A description of the validation warning.</p>
     */
    inline bool WarningsHasBeenSet() const { return m_warningsHasBeenSet; }

    /**
     * <p>A description of the validation warning.</p>
     */
    inline void SetWarnings(const Aws::Vector<Aws::String>& value) { m_warningsHasBeenSet = true; m_warnings = value; }

    /**
     * <p>A description of the validation warning.</p>
     */
    inline void SetWarnings(Aws::Vector<Aws::String>&& value) { m_warningsHasBeenSet = true; m_warnings = std::move(value); }

    /**
     * <p>A description of the validation warning.</p>
     */
    inline ValidationWarning& WithWarnings(const Aws::Vector<Aws::String>& value) { SetWarnings(value); return *this;}

    /**
     * <p>A description of the validation warning.</p>
     */
    inline ValidationWarning& WithWarnings(Aws::Vector<Aws::String>&& value) { SetWarnings(std::move(value)); return *this;}

    /**
     * <p>A description of the validation warning.</p>
     */
    inline ValidationWarning& AddWarnings(const Aws::String& value) { m_warningsHasBeenSet = true; m_warnings.push_back(value); return *this; }

    /**
     * <p>A description of the validation warning.</p>
     */
    inline ValidationWarning& AddWarnings(Aws::String&& value) { m_warningsHasBeenSet = true; m_warnings.push_back(std::move(value)); return *this; }

    /**
     * <p>A description of the validation warning.</p>
     */
    inline ValidationWarning& AddWarnings(const char* value) { m_warningsHasBeenSet = true; m_warnings.push_back(value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<Aws::String> m_warnings;
    bool m_warningsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
