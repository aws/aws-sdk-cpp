/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/ResourceError.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p> A list of errors retrieving an application's resources. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ResourceErrorsDetails">AWS
   * API Reference</a></p>
   */
  class ResourceErrorsDetails
  {
  public:
    AWS_RESILIENCEHUB_API ResourceErrorsDetails();
    AWS_RESILIENCEHUB_API ResourceErrorsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API ResourceErrorsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> This indicates if there are more errors not listed in the resourceErrors
     * list. </p>
     */
    inline bool GetHasMoreErrors() const{ return m_hasMoreErrors; }

    /**
     * <p> This indicates if there are more errors not listed in the resourceErrors
     * list. </p>
     */
    inline bool HasMoreErrorsHasBeenSet() const { return m_hasMoreErrorsHasBeenSet; }

    /**
     * <p> This indicates if there are more errors not listed in the resourceErrors
     * list. </p>
     */
    inline void SetHasMoreErrors(bool value) { m_hasMoreErrorsHasBeenSet = true; m_hasMoreErrors = value; }

    /**
     * <p> This indicates if there are more errors not listed in the resourceErrors
     * list. </p>
     */
    inline ResourceErrorsDetails& WithHasMoreErrors(bool value) { SetHasMoreErrors(value); return *this;}


    /**
     * <p> A list of errors retrieving an application's resources. </p>
     */
    inline const Aws::Vector<ResourceError>& GetResourceErrors() const{ return m_resourceErrors; }

    /**
     * <p> A list of errors retrieving an application's resources. </p>
     */
    inline bool ResourceErrorsHasBeenSet() const { return m_resourceErrorsHasBeenSet; }

    /**
     * <p> A list of errors retrieving an application's resources. </p>
     */
    inline void SetResourceErrors(const Aws::Vector<ResourceError>& value) { m_resourceErrorsHasBeenSet = true; m_resourceErrors = value; }

    /**
     * <p> A list of errors retrieving an application's resources. </p>
     */
    inline void SetResourceErrors(Aws::Vector<ResourceError>&& value) { m_resourceErrorsHasBeenSet = true; m_resourceErrors = std::move(value); }

    /**
     * <p> A list of errors retrieving an application's resources. </p>
     */
    inline ResourceErrorsDetails& WithResourceErrors(const Aws::Vector<ResourceError>& value) { SetResourceErrors(value); return *this;}

    /**
     * <p> A list of errors retrieving an application's resources. </p>
     */
    inline ResourceErrorsDetails& WithResourceErrors(Aws::Vector<ResourceError>&& value) { SetResourceErrors(std::move(value)); return *this;}

    /**
     * <p> A list of errors retrieving an application's resources. </p>
     */
    inline ResourceErrorsDetails& AddResourceErrors(const ResourceError& value) { m_resourceErrorsHasBeenSet = true; m_resourceErrors.push_back(value); return *this; }

    /**
     * <p> A list of errors retrieving an application's resources. </p>
     */
    inline ResourceErrorsDetails& AddResourceErrors(ResourceError&& value) { m_resourceErrorsHasBeenSet = true; m_resourceErrors.push_back(std::move(value)); return *this; }

  private:

    bool m_hasMoreErrors;
    bool m_hasMoreErrorsHasBeenSet = false;

    Aws::Vector<ResourceError> m_resourceErrors;
    bool m_resourceErrorsHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
