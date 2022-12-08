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
   * <p>Defines a validation error. Validation errors prevent pipeline activation.
   * The set of validation errors that can be returned are defined by AWS Data
   * Pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ValidationError">AWS
   * API Reference</a></p>
   */
  class ValidationError
  {
  public:
    AWS_DATAPIPELINE_API ValidationError();
    AWS_DATAPIPELINE_API ValidationError(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API ValidationError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the object that contains the validation error.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the object that contains the validation error.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the object that contains the validation error.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the object that contains the validation error.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the object that contains the validation error.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the object that contains the validation error.</p>
     */
    inline ValidationError& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the object that contains the validation error.</p>
     */
    inline ValidationError& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the object that contains the validation error.</p>
     */
    inline ValidationError& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A description of the validation error.</p>
     */
    inline const Aws::Vector<Aws::String>& GetErrors() const{ return m_errors; }

    /**
     * <p>A description of the validation error.</p>
     */
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }

    /**
     * <p>A description of the validation error.</p>
     */
    inline void SetErrors(const Aws::Vector<Aws::String>& value) { m_errorsHasBeenSet = true; m_errors = value; }

    /**
     * <p>A description of the validation error.</p>
     */
    inline void SetErrors(Aws::Vector<Aws::String>&& value) { m_errorsHasBeenSet = true; m_errors = std::move(value); }

    /**
     * <p>A description of the validation error.</p>
     */
    inline ValidationError& WithErrors(const Aws::Vector<Aws::String>& value) { SetErrors(value); return *this;}

    /**
     * <p>A description of the validation error.</p>
     */
    inline ValidationError& WithErrors(Aws::Vector<Aws::String>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A description of the validation error.</p>
     */
    inline ValidationError& AddErrors(const Aws::String& value) { m_errorsHasBeenSet = true; m_errors.push_back(value); return *this; }

    /**
     * <p>A description of the validation error.</p>
     */
    inline ValidationError& AddErrors(Aws::String&& value) { m_errorsHasBeenSet = true; m_errors.push_back(std::move(value)); return *this; }

    /**
     * <p>A description of the validation error.</p>
     */
    inline ValidationError& AddErrors(const char* value) { m_errorsHasBeenSet = true; m_errors.push_back(value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<Aws::String> m_errors;
    bool m_errorsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
