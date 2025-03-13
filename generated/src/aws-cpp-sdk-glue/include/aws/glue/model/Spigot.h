/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies a transform that writes samples of the data to an Amazon S3
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Spigot">AWS API
   * Reference</a></p>
   */
  class Spigot
  {
  public:
    AWS_GLUE_API Spigot() = default;
    AWS_GLUE_API Spigot(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Spigot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the transform node.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Spigot& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Vector<Aws::String>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Vector<Aws::String>>
    Spigot& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = Aws::String>
    Spigot& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A path in Amazon S3 where the transform will write a subset of records from
     * the dataset to a JSON file in an Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    Spigot& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a number of records to write starting from the beginning of the
     * dataset.</p>
     */
    inline int GetTopk() const { return m_topk; }
    inline bool TopkHasBeenSet() const { return m_topkHasBeenSet; }
    inline void SetTopk(int value) { m_topkHasBeenSet = true; m_topk = value; }
    inline Spigot& WithTopk(int value) { SetTopk(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The probability (a decimal value with a maximum value of 1) of picking any
     * given record. A value of 1 indicates that each row read from the dataset should
     * be included in the sample output.</p>
     */
    inline double GetProb() const { return m_prob; }
    inline bool ProbHasBeenSet() const { return m_probHasBeenSet; }
    inline void SetProb(double value) { m_probHasBeenSet = true; m_prob = value; }
    inline Spigot& WithProb(double value) { SetProb(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    int m_topk{0};
    bool m_topkHasBeenSet = false;

    double m_prob{0.0};
    bool m_probHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
