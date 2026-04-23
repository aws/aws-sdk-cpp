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
#include <aws/ssm/SSM_EXPORTS.h>

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
namespace SSM
{
namespace Model
{

  /**
   * <p>The number of managed instances found for each patch severity level defined
   * in the request filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/SeveritySummary">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API SeveritySummary
  {
  public:
    SeveritySummary();
    SeveritySummary(Aws::Utils::Json::JsonView jsonValue);
    SeveritySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of critical. Critical severity is determined by the organization that published
     * the compliance items.</p>
     */
    inline int GetCriticalCount() const{ return m_criticalCount; }

    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of critical. Critical severity is determined by the organization that published
     * the compliance items.</p>
     */
    inline bool CriticalCountHasBeenSet() const { return m_criticalCountHasBeenSet; }

    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of critical. Critical severity is determined by the organization that published
     * the compliance items.</p>
     */
    inline void SetCriticalCount(int value) { m_criticalCountHasBeenSet = true; m_criticalCount = value; }

    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of critical. Critical severity is determined by the organization that published
     * the compliance items.</p>
     */
    inline SeveritySummary& WithCriticalCount(int value) { SetCriticalCount(value); return *this;}


    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of high. High severity is determined by the organization that published the
     * compliance items.</p>
     */
    inline int GetHighCount() const{ return m_highCount; }

    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of high. High severity is determined by the organization that published the
     * compliance items.</p>
     */
    inline bool HighCountHasBeenSet() const { return m_highCountHasBeenSet; }

    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of high. High severity is determined by the organization that published the
     * compliance items.</p>
     */
    inline void SetHighCount(int value) { m_highCountHasBeenSet = true; m_highCount = value; }

    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of high. High severity is determined by the organization that published the
     * compliance items.</p>
     */
    inline SeveritySummary& WithHighCount(int value) { SetHighCount(value); return *this;}


    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of medium. Medium severity is determined by the organization that published the
     * compliance items.</p>
     */
    inline int GetMediumCount() const{ return m_mediumCount; }

    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of medium. Medium severity is determined by the organization that published the
     * compliance items.</p>
     */
    inline bool MediumCountHasBeenSet() const { return m_mediumCountHasBeenSet; }

    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of medium. Medium severity is determined by the organization that published the
     * compliance items.</p>
     */
    inline void SetMediumCount(int value) { m_mediumCountHasBeenSet = true; m_mediumCount = value; }

    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of medium. Medium severity is determined by the organization that published the
     * compliance items.</p>
     */
    inline SeveritySummary& WithMediumCount(int value) { SetMediumCount(value); return *this;}


    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of low. Low severity is determined by the organization that published the
     * compliance items.</p>
     */
    inline int GetLowCount() const{ return m_lowCount; }

    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of low. Low severity is determined by the organization that published the
     * compliance items.</p>
     */
    inline bool LowCountHasBeenSet() const { return m_lowCountHasBeenSet; }

    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of low. Low severity is determined by the organization that published the
     * compliance items.</p>
     */
    inline void SetLowCount(int value) { m_lowCountHasBeenSet = true; m_lowCount = value; }

    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of low. Low severity is determined by the organization that published the
     * compliance items.</p>
     */
    inline SeveritySummary& WithLowCount(int value) { SetLowCount(value); return *this;}


    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of informational. Informational severity is determined by the organization that
     * published the compliance items.</p>
     */
    inline int GetInformationalCount() const{ return m_informationalCount; }

    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of informational. Informational severity is determined by the organization that
     * published the compliance items.</p>
     */
    inline bool InformationalCountHasBeenSet() const { return m_informationalCountHasBeenSet; }

    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of informational. Informational severity is determined by the organization that
     * published the compliance items.</p>
     */
    inline void SetInformationalCount(int value) { m_informationalCountHasBeenSet = true; m_informationalCount = value; }

    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of informational. Informational severity is determined by the organization that
     * published the compliance items.</p>
     */
    inline SeveritySummary& WithInformationalCount(int value) { SetInformationalCount(value); return *this;}


    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of unspecified. Unspecified severity is determined by the organization that
     * published the compliance items.</p>
     */
    inline int GetUnspecifiedCount() const{ return m_unspecifiedCount; }

    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of unspecified. Unspecified severity is determined by the organization that
     * published the compliance items.</p>
     */
    inline bool UnspecifiedCountHasBeenSet() const { return m_unspecifiedCountHasBeenSet; }

    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of unspecified. Unspecified severity is determined by the organization that
     * published the compliance items.</p>
     */
    inline void SetUnspecifiedCount(int value) { m_unspecifiedCountHasBeenSet = true; m_unspecifiedCount = value; }

    /**
     * <p>The total number of resources or compliance items that have a severity level
     * of unspecified. Unspecified severity is determined by the organization that
     * published the compliance items.</p>
     */
    inline SeveritySummary& WithUnspecifiedCount(int value) { SetUnspecifiedCount(value); return *this;}

  private:

    int m_criticalCount;
    bool m_criticalCountHasBeenSet;

    int m_highCount;
    bool m_highCountHasBeenSet;

    int m_mediumCount;
    bool m_mediumCountHasBeenSet;

    int m_lowCount;
    bool m_lowCountHasBeenSet;

    int m_informationalCount;
    bool m_informationalCountHasBeenSet;

    int m_unspecifiedCount;
    bool m_unspecifiedCountHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
