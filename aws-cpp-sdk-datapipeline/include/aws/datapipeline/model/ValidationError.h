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
  class AWS_DATAPIPELINE_API ValidationError
  {
  public:
    ValidationError();
    ValidationError(Aws::Utils::Json::JsonView jsonValue);
    ValidationError& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_idHasBeenSet;

    Aws::Vector<Aws::String> m_errors;
    bool m_errorsHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
