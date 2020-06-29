/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie/Macie_EXPORTS.h>
#include <aws/macie/model/S3OneTimeClassificationType.h>
#include <aws/macie/model/S3ContinuousClassificationType.h>
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
namespace Macie
{
namespace Model
{

  /**
   * <p>The classification type that Amazon Macie Classic applies to the associated
   * S3 resources. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/ClassificationType">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE_API ClassificationType
  {
  public:
    ClassificationType();
    ClassificationType(Aws::Utils::Json::JsonView jsonValue);
    ClassificationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A one-time classification of all of the existing objects in a specified S3
     * bucket. </p>
     */
    inline const S3OneTimeClassificationType& GetOneTime() const{ return m_oneTime; }

    /**
     * <p>A one-time classification of all of the existing objects in a specified S3
     * bucket. </p>
     */
    inline bool OneTimeHasBeenSet() const { return m_oneTimeHasBeenSet; }

    /**
     * <p>A one-time classification of all of the existing objects in a specified S3
     * bucket. </p>
     */
    inline void SetOneTime(const S3OneTimeClassificationType& value) { m_oneTimeHasBeenSet = true; m_oneTime = value; }

    /**
     * <p>A one-time classification of all of the existing objects in a specified S3
     * bucket. </p>
     */
    inline void SetOneTime(S3OneTimeClassificationType&& value) { m_oneTimeHasBeenSet = true; m_oneTime = std::move(value); }

    /**
     * <p>A one-time classification of all of the existing objects in a specified S3
     * bucket. </p>
     */
    inline ClassificationType& WithOneTime(const S3OneTimeClassificationType& value) { SetOneTime(value); return *this;}

    /**
     * <p>A one-time classification of all of the existing objects in a specified S3
     * bucket. </p>
     */
    inline ClassificationType& WithOneTime(S3OneTimeClassificationType&& value) { SetOneTime(std::move(value)); return *this;}


    /**
     * <p>A continuous classification of the objects that are added to a specified S3
     * bucket. Amazon Macie Classic begins performing continuous classification after a
     * bucket is successfully associated with Amazon Macie Classic. </p>
     */
    inline const S3ContinuousClassificationType& GetContinuous() const{ return m_continuous; }

    /**
     * <p>A continuous classification of the objects that are added to a specified S3
     * bucket. Amazon Macie Classic begins performing continuous classification after a
     * bucket is successfully associated with Amazon Macie Classic. </p>
     */
    inline bool ContinuousHasBeenSet() const { return m_continuousHasBeenSet; }

    /**
     * <p>A continuous classification of the objects that are added to a specified S3
     * bucket. Amazon Macie Classic begins performing continuous classification after a
     * bucket is successfully associated with Amazon Macie Classic. </p>
     */
    inline void SetContinuous(const S3ContinuousClassificationType& value) { m_continuousHasBeenSet = true; m_continuous = value; }

    /**
     * <p>A continuous classification of the objects that are added to a specified S3
     * bucket. Amazon Macie Classic begins performing continuous classification after a
     * bucket is successfully associated with Amazon Macie Classic. </p>
     */
    inline void SetContinuous(S3ContinuousClassificationType&& value) { m_continuousHasBeenSet = true; m_continuous = std::move(value); }

    /**
     * <p>A continuous classification of the objects that are added to a specified S3
     * bucket. Amazon Macie Classic begins performing continuous classification after a
     * bucket is successfully associated with Amazon Macie Classic. </p>
     */
    inline ClassificationType& WithContinuous(const S3ContinuousClassificationType& value) { SetContinuous(value); return *this;}

    /**
     * <p>A continuous classification of the objects that are added to a specified S3
     * bucket. Amazon Macie Classic begins performing continuous classification after a
     * bucket is successfully associated with Amazon Macie Classic. </p>
     */
    inline ClassificationType& WithContinuous(S3ContinuousClassificationType&& value) { SetContinuous(std::move(value)); return *this;}

  private:

    S3OneTimeClassificationType m_oneTime;
    bool m_oneTimeHasBeenSet;

    S3ContinuousClassificationType m_continuous;
    bool m_continuousHasBeenSet;
  };

} // namespace Model
} // namespace Macie
} // namespace Aws
